#pragma once
#include "CoreMinimal.h"
#include "AssignTargetDependencyMeshStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FAssignTargetDependencyMeshStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TargetMeshPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> TargetDependencyMuscleRigMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMainMeshVisiblity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    FAssignTargetDependencyMeshStruct();
};

