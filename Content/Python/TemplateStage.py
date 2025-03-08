import json
import unreal
import os
import re

files_to_template = [
    "ST02_Advertise_1",
    "ST02_Sound",
    "ST02_Program",
    "ST02_Debug",
    "ST02_Demo_OFF_1",
    "ST02_Demo_ON_1",
    "ST02_Effect_1a",
    "ST02_Geom_1a",
    "ST02_Geom_Base_1",
    "ST02_Geom_1b",
    "ST02_Effect_3a",
    "ST02_Mob_2crowdEVENING",
    "ST02_Mob_2",
    "ST02_Light_2",
    "ST02_Light_3",
    "ST02_Mob_3",
]

additional_name_suffix = "Python"


def is_wall(asset_path) :
    if "Wall" in asset_path:
        return True
    return False

def test_print_start(player_start):
    spawned_actor = find_actor_by_name(player_start)
    if spawned_actor:
        stage_light = spawned_actor.get_editor_property("StageLightType")
        unreal.log(f"Found EStageLightType is {stage_light}")

def set_editor_property_in_struct(spawned_actor, property_value, struct_name, inner_struct_name):
    parameter = spawned_actor.get_editor_property(struct_name)
    parameter.set_editor_property(inner_struct_name, property_value)

def is_reference(asset_path) :
    if "PersistentLevel" in asset_path:
        return True
    return False

def get_reference_name(ref_name):
    return ref_name.split("PersistentLevel.")[-1].rstrip("'")


def find_actor_by_name(actor_name):
    # Get all actors in the current level
    editor_subsystem = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)
    all_actors = editor_subsystem.get_all_level_actors()

    # Search for the actor with the specified name
    for actor in all_actors:
        if actor.get_actor_label() == actor_name:
            return actor
    return None  # Return None if no actor is found with the specified name

def extra_generic_array_from_list(object_entry, name, obj, property_name) :
    # Temporary code for collecting Array Gimmicks.
    polaris_array = []
    extracted_array = obj.get("Properties", {}).get(property_name, [])

    for extracted_entry in extracted_array:
        entry = extracted_entry.get("ObjectName")
        unreal.log(f"{entry} referenced in {name}")
        polaris_array.append(entry)

    # Store the extracted data in the dictionary
    object_entry[name][property_name] = polaris_array

def generic_loop_and_append(spawned_actor, properties, property_name):
    generic_ref_array = properties.get(property_name, [])

    for ref_value in generic_ref_array:
        reference = get_reference_name(ref_value)

        unreal.log(f"Searching for {reference}...")
        found_actor = find_actor_by_name(reference)
        if found_actor:
            unreal.log("Actor was found and located to reference!")

            variable_ref = spawned_actor.get_editor_property(property_name)
            variable_ref.append(found_actor)

            unreal.log(
                f"Added {reference} as a reference to {spawned_actor.get_actor_label()})")

def extract_properties_from_list(stage_data, target_types, base_properties):
    new_polaris_list = {}

    for obj in stage_data:
        # Check if the object's "Type" matches the target type
        if obj.get("Type") in target_types:
            start_name = obj.get("Name")
            new_polaris_list[start_name] = {}

            new_polaris_list[start_name]["Type"] = obj.get("Type")

            # Exception Handlers, should be done in their own specific functions as extra code.
            # Extract and update properties based on the provided defaults
            for prop, default in base_properties.items():
                new_polaris_list[start_name][prop] = obj.get("Properties", {}).get(prop, default)

            # Temporary code for collecting HitForceParameters
            radial_force_damage = obj.get("Properties", {}).get("HitForceParam", {}).get("RadialForceDamage", 0)
            new_polaris_list[start_name]["RadialForceDamage"] = radial_force_damage

            # Temporary code for collecting BreakForceParameters
            force_strength = obj.get("Properties", {}).get("BreakForceParam", {}).get("ForceStrength", 0)
            new_polaris_list[start_name]["ForceStrength"] = force_strength

            # Temporary code for collecting Array Gimmicks.
            extra_generic_array_from_list(new_polaris_list, start_name, obj, "StageGimmick_DeformControls")
            extra_generic_array_from_list(new_polaris_list, start_name, obj, "HitForces")
            extra_generic_array_from_list(new_polaris_list, start_name, obj, "HitForcesPolaris")

            # Temporary code for Stage Light Type Enum.
            stage_light_type = obj.get("Properties").get("StageLightType", "EStageLightType::Term")
            new_polaris_list[start_name]["StageLightType"] = stage_light_type

            # Temporary code for Stage Position Type ID.
            position_type_id = obj.get("Properties").get("StagePositionTypeId", "EStagePositionTypeId::GameStart")
            new_polaris_list[start_name]["StagePositionTypeId"] = position_type_id

            unreal.log(f"Found position type {position_type_id}")


    return new_polaris_list

def create_objects_from_list(polaris_list, properties_defaults, folder_path, class_path):
    # Loop through all the properties we have and any additional properties
    for new_object, properties in polaris_list.items():
        # Extract the location, rotation, and scale from the JSON data
        create_object(new_object, properties, properties_defaults, folder_path, class_path)


def create_object(object, properties, additional_properties, folder_path, class_path):
    # Get the Editor Actor Subsystem
    editor_subsystem = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)

    location = properties.get("RelativeLocation", {})
    rotation = properties.get("RelativeRotation", {})
    scale = properties.get("RelativeScale3D", {})

    # Get the appropiate Actor Class, and adjust how we collect it depending on if it's a Blueprint or a C++ class.
    if class_path.startswith("/Game"):
        # Blueprint Class, adjust how we spawn these in.
        actor_class = get_blueprint_class(class_path)
    else:
        actor_class = unreal.load_class(None, class_path)

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
        spawned_actor.set_actor_label(object)
        spawned_actor.set_folder_path(folder_path)

        for prop, default in additional_properties.items():
            # Only set the property value if there is a different value to what it's supposed to be, default properties will be set correctly this way and will protect us from invalid sets.
            value = properties.get(prop, default)
            if value != default:
                spawned_actor.set_editor_property(prop, value)

        # Apply the scale to the actor if needed
        root_component = spawned_actor.root_component
        if root_component:
            root_component.set_world_scale3d(spawn_scale)

        unreal.log(f"{object} spawned successfully!")
    else:
        unreal.log_error(f"Failed to spawn {object}.")

    return spawned_actor


def get_blueprint_class(blueprintpath) :
    """Returns the class used for a blueprint"""
    return unreal.EditorAssetLibrary.load_blueprint_class(blueprintpath)

def load_stage_json(stage_name) :
    """Handles collecting the JSON data that will be templated."""
    # Get the project directory
    content_dir = unreal.SystemLibrary.get_project_content_directory()

    # Define additional directories you want to append
    additional_directories = ['Python']

    full_path = os.path.join(content_dir, *additional_directories)

    # Print the full directory path
    print(f"Full path: {full_path}")

    # If you need to grab a file name (e.g., a JSON file) from the directory, add the filename:
    file_path = os.path.join(full_path, stage_name).replace(os.sep, '/')

    # Load the JSON data from the file
    with open(file_path, 'r') as file:
        return json.load(file)

def add_transforms_to_actor_list(data, root_component, polaris_list) :
    for obj in data:
        if obj.get("Type") in root_component:
            outer_name = obj.get("Outer")
            if outer_name in polaris_list:
                # Extract properties if they exist
                relative_location = obj.get("Properties", {}).get("RelativeLocation", {})
                relative_rotation = obj.get("Properties", {}).get("RelativeRotation", {})
                relative_scale = obj.get("Properties", {}).get("RelativeScale3D", {})

                # Save the data under the corresponding wall name
                polaris_list[outer_name].update({
                    'RelativeLocation': relative_location,
                    'RelativeRotation': relative_rotation,
                    'RelativeScale3D': relative_scale
                })

def add_facade_vectors(spawned_actor, groupname, facadevector) :
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

def parse_key_actors(data) :
    """It's imperative that these values get handled first as we need to do a reference checks for the other assets at a later date."""
    parse_gimmick_controller(data)
    parse_radial_force_actor(data)


def quick_parse_asset(data, properties_defaults, type_class, class_path, root_component, folder_path):
    # Automated quick parse for extra items that don't need much changes from the standard configuration.
    polaris_asset = extract_properties_from_list(data, type_class, properties_defaults)

    if len(polaris_asset) <= 0:
        return

    add_transforms_to_actor_list(data, root_component, polaris_asset)
    create_objects_from_list(polaris_asset, properties_defaults, folder_path, class_path)


def parse_gimmick_controller(data) :
    """Handles spawning Gimmick Controllers, Radial Force"""
    properties_defaults = {
        "DestructDelayMaxTime": 0,
        "IsVanish": False,
        "VanishingEndSecond": 0,
    }

    polaris_gimmick_controller = extract_properties_from_list(data, "BP_PolarisStageGimmickDeformControl_C", properties_defaults)

    if len(polaris_gimmick_controller) <= 0:
        return

    add_transforms_to_actor_list(data, "SceneComponent", polaris_gimmick_controller)
    create_objects_from_list(polaris_gimmick_controller, properties_defaults, "Stages/Controllers", "/Game/Stage/Common/Blueprints/BP_PolarisStageGimmickDeformControl.BP_PolarisStageGimmickDeformControl")

def parse_radial_force_actor(data) :
    """Handles spawning Gimmick Controllers, Radial Force"""
    empty_properties = {
    }

    supported_forces = {
        "RadialForceActor": "/Script/Engine.RadialForceActor",
        "PolarisRadialForceActor": "/Script/Polaris.PolarisRadialForceActor",
        "BP_PolarisRadialForce_C": "/Game/Stage/Common/Blueprints/BP_PolarisRadialForce.BP_PolarisRadialForce",
    }

    supported_forces_components = {
        "RadialForceComponent",
        "PolarisRadialForceComponent",
    }

    additional_radial_properties = {
        "TargetMask": 0,
        "Radius": 200,
        "ForceStrength": 10,
        "DestructibleDamage": 0,
    }

    polaris_radial_force = extract_properties_from_list(data, supported_forces, empty_properties)

    if len(polaris_radial_force) <= 0:
        return

    add_transforms_to_actor_list(data, supported_forces_components, polaris_radial_force)
    for obj in data:
        if obj.get("Type") in supported_forces_components:
            outer_name = obj.get("Outer")
            if outer_name in polaris_radial_force:
                # Extract properties if they exist
                relative_location = obj.get("Properties", {}).get("RelativeLocation", {})
                relative_rotation = obj.get("Properties", {}).get("RelativeRotation", {})
                relative_scale = obj.get("Properties", {}).get("RelativeScale3D", {})

                # Save the data under the corresponding wall name
                polaris_radial_force[outer_name].update({
                    'RelativeLocation': relative_location,
                    'RelativeRotation': relative_rotation,
                    'RelativeScale3D': relative_scale,
                })

                # Extract and update properties based on the provided defaults
                for prop, default in additional_radial_properties.items():
                    polaris_radial_force[outer_name][prop] = obj.get("Properties", {}).get(prop, default)


    for new_object, properties in polaris_radial_force.items():

        radial_type = properties.get("Type")
        radial_class_path = supported_forces[radial_type]

        spawned_actor = create_object(new_object, properties, empty_properties, "Stages/Controllers", radial_class_path)
        root_component = spawned_actor.root_component

        if root_component:
            for prop, default in additional_radial_properties.items():
                # Only set the property value if there is a different value to what it's supposed to be, default properties will be set correctly this way and will protect us from invalid sets.
                value = properties.get(prop, default)
                if value != default:
                    root_component.set_editor_property(prop, value)

def parse_walls(data) :
    """Handles the placement of Walls, and Floors."""
    # List of supported wall types
    supported_walls = {
        "PolarisStageWallActor": "/Script/Polaris.PolarisStageWallActor",
        "BP_PolarisWall_C": "/Game/Stage/Common/Blueprints/BP_PolarisWall.BP_PolarisWall",
        "BP_PolarisWallBreak_C": "/Game/Stage/Common/Blueprints/BP_PolarisWallBreak.BP_PolarisWallBreak",
        "BP_PolarisWallBreakBalcony_C": "/Game/Stage/Common/Blueprints/BP_PolarisWallBreakBalcony.BP_PolarisWallBreakBalcony",
        "PolarisStageFloorActor": "/Script/Polaris.PolarisStageFloorActor",
        "BP_PolarisFloor_C": "/Game/Stage/Common/Blueprints/BP_PolarisFloor.BP_PolarisFloor",
        "BP_PolarisFloorBreak_C": "/Game/Stage/Common/Blueprints/BP_PolarisFloorBreak.BP_PolarisFloorBreak",
    }

    additional_properties = {
        "FloorNo": 0,
        "WallAttribute": 0,
        "RelatedStageSequenceId": 0,
        "IsNextStageSequence": True,
        "IsDurable": True,
        "IsStageDestruction": False,
        "WallDamageId": 0,
        "IsFloorBreakable": False,
        "IsDummyBreak": False,
        "IsFloorBlast": False,
        "HitInterval": 30,
    }

    polaris_walls = extract_properties_from_list(data, supported_walls, additional_properties)

    if len(polaris_walls) <= 0:
        return

    add_transforms_to_actor_list(data, "StaticMeshComponent", polaris_walls)
    for new_object, properties in polaris_walls.items():
        wall_type = properties.get("Type")
        if is_wall(wall_type):
            folder_path = "Stage/Walls"
        else:
            folder_path = "Stage/Floors"

        wall_class_path = supported_walls[wall_type]

        spawned_actor = create_object(new_object, properties, additional_properties, folder_path, wall_class_path)

        if spawned_actor:
            # Update Radial Force Damage Amount
            radial_force_damage = properties.get("RadialForceDamage")
            set_editor_property_in_struct(spawned_actor, radial_force_damage, "HitForceParam", "RadialForceDamage")

            force_strength = properties.get("ForceStrength")
            set_editor_property_in_struct(spawned_actor, force_strength, "BreakForceParam", "ForceStrength")

            # Add Radial Force References
            generic_loop_and_append(spawned_actor, properties, "HitForces")
            generic_loop_and_append(spawned_actor, properties, "HitForcesPolaris")

            # Add Gimmick References
            generic_loop_and_append(spawned_actor, properties, "StageGimmick_DeformControls")

            # Spawns a cube in place of the actor.
            # Get the system to control the actors
            editor_actor_subs = unreal.get_editor_subsystem(unreal.EditorActorSubsystem)

            # Generate a world space position (0, 0, 0)
            location = properties.get("RelativeLocation", {})
            rotation = properties.get("RelativeRotation", {})
            scale = properties.get("RelativeScale3D", {})

            # Define spawn location, rotation, and scale
            spawn_location = unreal.Vector(location.get("X", 0), location.get("Y", 0), location.get("Z", 0))
            spawn_rotation = unreal.Rotator(rotation.get("Roll", 0), rotation.get("Pitch", 0), rotation.get("Yaw", 0))
            spawn_scale = unreal.Vector(scale.get("X", 1), scale.get("Y", 1), scale.get("Z", 1))

            # We want to create a StaticMeshActor
            actor_class = unreal.StaticMeshActor

            # Place it in the level
            static_mesh_actor = editor_actor_subs.spawn_actor_from_class(actor_class, spawn_location, spawn_rotation)
            static_mesh_actor.set_actor_label(f"SM_{new_object}")
            static_mesh_actor.set_folder_path("Stage/BasicShapes")

            # Load and add the cube to it
            static_mesh = unreal.EditorAssetLibrary.load_asset("/Engine/BasicShapes/Cube.Cube")
            static_mesh_actor.static_mesh_component.set_static_mesh(static_mesh)

            root_component = static_mesh_actor.root_component
            if root_component:
                root_component.set_world_scale3d(spawn_scale)


def parse_barriers(data) :
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
                add_facade_vectors(spawned_actor, "WallBarrierGroups", facade_vectors)
                add_facade_vectors(spawned_actor, "WallCullBackGroups", cullback_facade_vectors)

            else:
                unreal.log_error(f"Failed to spawn {barrier_name} from Blueprint.")

def parse_player_starts(data) :
    """Handles the placement of Player Starts."""
    additional_properties = {
        "StageSequenceId": 0,
        "StageBrokenHistory": 0,
        "FloorId": 0,
    }

    polaris_player_starts = extract_properties_from_list(data, "PolarisBattlePlayerStart", additional_properties)

    if len(polaris_player_starts) <= 0:
        return

    add_transforms_to_actor_list(data, "CapsuleComponent", polaris_player_starts)

    for new_object, properties in polaris_player_starts.items():
        spawned_actor = create_object(new_object, properties, additional_properties, "Stages/Starts", "/Script/Polaris.PolarisBattlePlayerStart")
        if spawned_actor:
            stage_light = properties.get("StageLightType")
            formatted_light = format_enum(stage_light, unreal.StageLightType)

            unreal.log(f"Formatted string from {stage_light} to {formatted_light}")

            spawned_actor.set_editor_property("StageLightType", formatted_light)

            position_type_id = properties.get("StagePositionTypeId")
            formatted_position_type_id = format_enum(position_type_id, unreal.StagePositionTypeId)

            unreal.log(f"Formatted string from {position_type_id} to {formatted_position_type_id}")

            spawned_actor.set_editor_property("StagePositionTypeId", formatted_position_type_id)

def parse_volume_collisions(data) :
    """Handles the placement of Player Starts."""
    additional_properties = {
    }

    polaris_volume_collisions = extract_properties_from_list(data, "BP_VolumeCollision_C", additional_properties)

    if len(polaris_volume_collisions) <= 0:
        return

    add_transforms_to_actor_list(data, "SceneComponent", polaris_volume_collisions)

    for new_object, properties in polaris_volume_collisions.items():
        spawned_actor = create_object(new_object, properties, additional_properties, "Stages/Extra/Volumes", "/Game/Stage/Common/Blueprints/BP_VolumeCollision.BP_VolumeCollision")


def format_enum(input_string, enum_type):
    # Step 1: Extract the part after "EStageLightType::"
    if "::" in input_string:
        extracted_part = input_string.split("::")[1]
    else:
        extracted_part = input_string

    # Step 2: Insert an underscore before each uppercase letter that follows a lowercase letter
    formatted_string = re.sub(r'(?<=[a-z])([A-Z])', r'_\1', extracted_part)

    # Step 3: Convert to uppercase
    formatted_string = formatted_string.upper()

    # Convert the formatted string to the corresponding enum value
    enum_value = getattr(enum_type, formatted_string, None)

    return enum_value

def does_path_include_temp(package_path):
    if "temp" in package_path.lower():
        print("The path includes 'temp'.")

def create_sublevel(level_name, root_level, streaming_class=unreal.LevelStreamingAlwaysLoaded):
    package_path = root_level.get_outermost().get_name()
    parent_path = os.path.dirname(package_path) + '/'

    if "temp" in package_path.lower():
        parent_path = "/Game/Stage/Temp/"

    unreal.log(f"Current path is: {parent_path}")

    return unreal.EditorLevelUtils.create_new_streaming_level(streaming_class, f"{parent_path}Sublevels/{level_name}")

def create_sublevel_by_path(level_path, streaming_class=unreal.LevelStreamingAlwaysLoaded):
    return unreal.EditorLevelUtils.create_new_streaming_level(streaming_class, level_path)

def get_persistent_level():
    level_subsystem = unreal.get_editor_subsystem(unreal.LevelEditorSubsystem)
    current_level = level_subsystem.get_current_level()

    unreal.log(f"Current Root Level is {current_level.get_outermost().get_name()}")
    return current_level

def main():

    root_level = get_persistent_level()
    # Main function that handles the templating of the stage.
    template_steps = 4 # The amount of steps taken to template a stage. Used for Unreal ScopedSlowTask loading bar.
    with unreal.ScopedSlowTask(len(files_to_template) * template_steps, "Templating Stages") as slow_task:
        slow_task.make_dialog()
        for current_file in files_to_template:
            # Load Map data from FModel .json
            stage_data = load_stage_json(f"{current_file}.json")
            map_name = f"{current_file.removesuffix('.json')}"

            # Create a new sublevel and set it as the current
            loaded_actor = create_sublevel(map_name, root_level)
            unreal.EditorLevelUtils.make_level_current(loaded_actor)

            # Parse Stage Data
            with unreal.ScopedEditorTransaction(f"Template {map_name}") as trans:
                unreal.log(f"Parsing {map_name}")
                slow_task.enter_progress_frame(1, f"Parsing Key Actors from {map_name}")
                parse_key_actors(stage_data)

                unreal.log("Beginning Parsing of Walls...")
                slow_task.enter_progress_frame(1, f"Parsing Walls from {map_name}")
                parse_walls(stage_data)

                unreal.log("Beginning Parsing of Barriers...")
                slow_task.enter_progress_frame(1, f"Parsing Barriers from {map_name}")
                parse_barriers(stage_data)

                unreal.log("Beginning Parsing of Extras...")
                slow_task.enter_progress_frame(1, f"Parsing Player Start from {map_name}")
                parse_player_starts(stage_data)
                parse_volume_collisions(stage_data)

                unreal.log(f"finished parsing {map_name}.")

        root_level_name = os.path.basename(root_level.get_outermost().get_name())

        create_sublevel_by_path("/Game/Stage/Common/SubLevels/ST_CommonUtil")
        create_sublevel_by_path("/Game/Stage/Common/SubLevels/ST_CommonBattle")

        level_subsystem = unreal.get_editor_subsystem(unreal.LevelEditorSubsystem)
        level_subsystem.set_current_level_by_name(root_level_name)
        unreal.log("All inputted stages have been attempted to be parsed!")

# create_sublevel("STPython_Test")
main()

# create_sublevel_by_path("/Game/Stage/Common/SubLevels/ST_CommonUtil")

