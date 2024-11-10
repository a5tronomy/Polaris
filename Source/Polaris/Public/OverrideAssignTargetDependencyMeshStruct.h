#pragma once
#include "CoreMinimal.h"
#include "AssignTargetDependencyMeshStruct.h"
#include "OverrideAssignTargetDependencyMeshStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FOverrideAssignTargetDependencyMeshStruct : public FAssignTargetDependencyMeshStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> OverrideTargetDependencyMuscleRigMesh;
    
    FOverrideAssignTargetDependencyMeshStruct();
};

