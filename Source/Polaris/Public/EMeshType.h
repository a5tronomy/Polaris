#pragma once
#include "CoreMinimal.h"
#include "EMeshType.generated.h"

UENUM()
enum class EMeshType : uint8 {
    E_SkeletalMesh UMETA(DisplayName = "Skeletal Mesh"),
    E_SkeletalMeshArray UMETA(DisplayName = "Skeletal Mesh Array"),
    E_StaticMesh UMETA(DisplayName = "Static Mesh"),
    E_NoneStaticMesh UMETA(DisplayName = "None Static Mesh"),
};

