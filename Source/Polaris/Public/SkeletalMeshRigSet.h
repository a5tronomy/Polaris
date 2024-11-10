#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshRigSet.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FSkeletalMeshRigSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SourceMuscleRigMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> SourceProportionRigMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PhoenixSkeletonPropotionType;
    
    FSkeletalMeshRigSet();
};

