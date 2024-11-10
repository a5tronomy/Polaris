#pragma once
#include "CoreMinimal.h"
#include "AkMeshType.generated.h"

UENUM()
enum class AkMeshType : uint8 {
    StaticMesh,
    CollisionMesh,
};

