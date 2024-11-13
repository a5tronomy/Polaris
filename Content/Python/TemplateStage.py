import json
import unreal
import os

file_name = 'ST12_Geom_Base_1.json'

def GetBlueprintClass(blueprintpath) :
    """Returns the class used for a blueprint"""
    return unreal.EditorAssetLibrary.load_blueprint_class(blueprintpath)

def LoadStageJson(stagename) :
    """Handles collecting the JSON data that will be templated."""
    # Get the project directory
    content_dir = unreal.SystemLibrary.get_project_content_directory()

    # Define additional directories you want to append
    additional_directories = ['Python']

    full_path = os.path.join(content_dir, *additional_directories)

    # Print the full directory path
    print(f"Full path: {full_path}")

    # If you need to grab a file name (e.g., a JSON file) from the directory, add the filename:
    file_path = os.path.join(full_path, stagename).replace(os.sep, '/')

    # Load the JSON data from the file
    with open(file_path, 'r') as file:
        return json.load(file)

def AddFacadeVectors(spawned_actor, groupname, facadevector) :
    """
    Adds the Facade Vectors in the correct location.
    Requires the actor that will recieve the new facades, and the appropiate struct name.
    """
    facade_struct = spawned_actor.get_editor_property(groupname)

    for i, vector in enumerate(facadevector, start=1):
        # Convert stored Vector to Unreal Vector
        unreal_vector = unreal.Vector(vector.get("X", 0), vector.get("Y", 0), vector.get("Z", 0))

        # Create a struct value
        struct_instance = unreal.WallBarrierGroup()
        struct_instance.set_editor_property('FacadeVector', unreal_vector)

        facade_struct.append(struct_instance)
        unreal.log(f"Added Facade Vector to {groupname} (X={vector.get('X', 0)}, Y={vector.get('Y', 0)}, Z={vector.get('Z', 0)})")


def ParseWalls(data) :
    """Handles the placement of Walls, and Floors."""
    # List of supported wall types
    supported_walls = {
        "PolarisStageWallActor": "/Script/Polaris.PolarisStageWallActor",
        "BP_PolarisWall_C": "/Game/Stage/Common/Blueprints/BP_PolarisWall.BP_PolarisWall",
        "BP_PolarisWallBreak_C": "/Game/Stage/Common/Blueprints/BP_PolarisWallBreak.BP_PolarisWallBreak",
        "BP_PolarisWallBreakBalcony_C": "/Game/Stage/Common/Blueprints/BP_PolarisWallBreakBalcony.BP_PolarisWallBreakBalcony",
        "PolarisStageFloorActor": "/Script/Polaris.PolarisStageFloorActor",
        "BP_PolarisFloor_C": "/Game/Stage/Common/Blueprints/BP_PolarisWallBreakBalcony.BP_PolarisWallBreakBalcony",
        "BP_PolarisFloorBreak_C": "/Game/Stage/Common/Blueprints/BP_PolarisWallBreakBalcony.BP_PolarisWallBreakBalcony",
    }

    # Step 1: Find all "BP_PolarisWall_C" objects
    polaris_walls = {}

    for obj in data:
        if obj.get("Type") in supported_walls:
            wall_name = obj.get("Name")
            polaris_walls[wall_name] = {}  # Store wall names for later reference

            wall_type = obj.get("Type")
            floor_no = obj.get("Properties", {}).get("FloorNo", 0)
            wall_attribute = obj.get("Properties", {}).get("WallAttribute", 0)
            related_stage_sequence_id = obj.get("Properties", {}).get("RelatedStageSequenceId", 0)

            polaris_walls[wall_name].update({
                'WallType': wall_type,
                'FloorNo': floor_no,
                'WallAttribute': wall_attribute,
                'RelatedStageSequenceId': related_stage_sequence_id,
            })

    if len(polaris_walls) <= 0:
        return

    # Step 2: Search for "StaticMeshComponent" objects linked to the found walls
    for obj in data:
        if obj.get("Type") == "StaticMeshComponent":
            outer_name = obj.get("Outer")
            if outer_name in polaris_walls:
                # Extract properties if they exist
                relative_location = obj.get("Properties", {}).get("RelativeLocation", {})
                relative_rotation = obj.get("Properties", {}).get("RelativeRotation", {})
                relative_scale = obj.get("Properties", {}).get("RelativeScale3D", {})

                # Save the data under the corresponding wall name
                polaris_walls[outer_name].update({
                    'RelativeLocation': relative_location,
                    'RelativeRotation': relative_rotation,
                    'RelativeScale3D': relative_scale
                })

    # Get the Editor Actor Subsystem
    editor_subsystem = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)

    # Loop through all the walls we've found.
    for wall_name, properties in polaris_walls.items():
        # Extract the location, rotation, and scale from the JSON data
        location = properties.get("RelativeLocation", {})
        rotation = properties.get("RelativeRotation", {})
        scale = properties.get("RelativeScale3D", {})

        # Get the associated class with the associated wall.
        wall_type = properties.get("WallType")
        wall_path = supported_walls[wall_type]

        # Get the appropiate Actor Class, and adjust how we collect it depending on if it's a Blueprint or a C++ class.
        actor_class = None
        if wall_path.startswith("/Game"):
            actor_class = GetBlueprintClass(wall_path)
        else:
            actor_class = unreal.load_class(None, wall_path)

        # Define spawn location, rotation, and scale
        spawn_location = unreal.Vector(location.get("X", 0), location.get("Y", 0), location.get("Z", 0))
        spawn_rotation = unreal.Rotator(rotation.get("Roll", 0), rotation.get("Pitch", 0), rotation.get("Yaw", 0))
        spawn_scale = unreal.Vector(scale.get("X", 1), scale.get("Y", 1), scale.get("Z", 1))

        # Spawn the actor using the loaded Blueprint class
        spawned_actor = editor_subsystem.spawn_actor_from_class(
            actor_class,
            spawn_location,
            spawn_rotation
        )

        # Check if the actor was spawned successfully
        if spawned_actor:
            # Set a custom name for the spawned actor
            spawned_actor.set_actor_label(wall_name)

            # Set the correct folder depending on if it's a wall or a floor.
            folder_path = None
            if "Wall" in wall_path:
                folder_path = "Stage/Walls"
            else:
                folder_path = "Stage/Floors"

            spawned_actor.set_folder_path(folder_path)

            # Set Wall Properties
            spawned_actor.set_editor_property('FloorNo', properties.get("FloorNo", 0))
            spawned_actor.set_editor_property('WallAttribute', properties.get("WallAttribute", 0))
            spawned_actor.set_editor_property('RelatedStageSequenceId', properties.get("RelatedStageSequenceId", 0))

            # Apply the scale to the actor if needed
            static_mesh_component = spawned_actor.get_component_by_class(unreal.StaticMeshComponent)
            if static_mesh_component:
                static_mesh_component.set_world_scale3d(spawn_scale)

            unreal.log(f"{wall_name} spawned successfully with location, rotation, and scale!")
        else:
            unreal.log_error(f"Failed to spawn {wall_name} from Blueprint.")

def ParseBarriers(data) :
    """Handles the placement of Barriers and the appropriate facade values associated with them."""
    # Step 1: Find all "BP_PolarisWall_C" objects
    polaris_barriers = {}

    for obj in data:
        if obj.get("Type") == "BP_BarrierCol1_C":
            barrier_name = obj.get("Name")
            polaris_barriers[barrier_name] = {}  # Store wall names for later reference

            # Extract FacadeVector from WallBarrierGroups
            barrier_groups = obj.get("Properties", {}).get("WallBarrierGroups", [])
            facade_vectors = []
            for group in barrier_groups:
                facade_vector = group.get("FacadeVector", {})
                facade_vectors.append(facade_vector)

            # Extract FacadeVector from WallCullBackGroups
            cullback_groups = obj.get("Properties", {}).get("WallCullBackGroups", [])
            cullback_facade_vectors = []
            for group in cullback_groups:
                facade_vector = group.get("FacadeVector", {})
                cullback_facade_vectors.append(facade_vector)

            # Store the extracted data in the dictionary
            polaris_barriers[barrier_name] = {
                "FacadeVectors": facade_vectors,
                "CullBackFacadeVectors": cullback_facade_vectors
            }

    if len(polaris_barriers) <= 0:
        return


    # Step 2: Search for "SceneComponent" objects linked to the found walls
    for obj in data:
        if obj.get("Type") == "SceneComponent":
            outer_name = obj.get("Outer")
            if outer_name in polaris_barriers:
                # Extract properties if they exist
                relative_location = obj.get("Properties", {}).get("RelativeLocation", {})
                relative_rotation = obj.get("Properties", {}).get("RelativeRotation", {})
                relative_scale = obj.get("Properties", {}).get("RelativeScale3D", {})

                # Save the data under the corresponding wall name
                polaris_barriers[outer_name].update({
                    'RelativeLocation': relative_location,
                    'RelativeRotation': relative_rotation,
                    'RelativeScale3D': relative_scale
                })

    # Step 3: Load your Blueprint asset (provide the correct path to your Blueprint)
    blueprint_path = '/Game/Stage/Common/Blueprints/BP_BarrierCol1.BP_BarrierCol1'
    blueprint_class = unreal.EditorAssetLibrary.load_blueprint_class(blueprint_path)

    # Get the Editor Actor Subsystem
    editor_subsystem = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)

    # Check if the Blueprint class was loaded successfully
    if not blueprint_class:
        unreal.log_error(f"Blueprint '{blueprint_path}' not found!")
    else:
        # Loop through each entry in the parsed JSON data
        for barrier_name, properties in polaris_barriers.items():

            # Extract the location, rotation, and scale from the JSON data
            location = properties.get("RelativeLocation", {})
            rotation = properties.get("RelativeRotation", {})
            scale = properties.get("RelativeScale3D", {})

            # Define spawn location, rotation, and scale
            spawn_location = unreal.Vector(location.get("X", 0), location.get("Y", 0), location.get("Z", 0))
            spawn_rotation = unreal.Rotator(rotation.get("Roll", 0), rotation.get("Pitch", 0), rotation.get("Yaw", 0))
            spawn_scale = unreal.Vector(scale.get("X", 1), scale.get("Y", 1), scale.get("Z", 1))

            # Spawn the actor using the loaded Blueprint class
            spawned_actor = editor_subsystem.spawn_actor_from_class(
                blueprint_class,
                spawn_location,
                spawn_rotation
            )

            # Check if the actor was spawned successfully
            if spawned_actor:
                # Set a custom name for the spawned actor
                spawned_actor.set_actor_label(barrier_name)

                folder_path = "Stage/Barriers"
                spawned_actor.set_folder_path(folder_path)

                # Apply the scale to the actor if needed
                static_mesh_component = spawned_actor.get_component_by_class(unreal.StaticMeshComponent)
                if static_mesh_component:
                    static_mesh_component.set_world_scale3d(spawn_scale)

                facade_vectors = properties.get('FacadeVectors', [])
                cullback_facade_vectors = properties.get('CullBackFacadeVectors', [])

                # Check if the actor has the property "WallBarrierGroup"
                AddFacadeVectors(spawned_actor, "WallBarrierGroups", facade_vectors)
                AddFacadeVectors(spawned_actor, "WallCullBackGroups", cullback_facade_vectors)

            else:
                unreal.log_error(f"Failed to spawn {barrier_name} from Blueprint.")


stagedata = LoadStageJson(file_name)

ParseWalls(stagedata)
ParseBarriers(stagedata)