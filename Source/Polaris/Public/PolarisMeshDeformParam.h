#pragma once
#include "CoreMinimal.h"
#include "PolarisMeshDeformParam.generated.h"

USTRUCT(BlueprintType)
struct FPolarisMeshDeformParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MorphTargetName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName JointName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WeightMax;
    
    UPROPERTY(BlueprintReadOnly)
    float Weight;
    
    POLARIS_API FPolarisMeshDeformParam();
};

