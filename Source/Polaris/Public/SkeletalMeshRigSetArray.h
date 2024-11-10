#pragma once
#include "CoreMinimal.h"
#include "DependencySkeletalMeshRigSet.h"
#include "SkeletalMeshRigSetArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSkeletalMeshRigSetArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDependencySkeletalMeshRigSet> RigSetArray;
    
    FSkeletalMeshRigSetArray();
};

