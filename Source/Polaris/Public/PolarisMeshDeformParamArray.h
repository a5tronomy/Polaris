#pragma once
#include "CoreMinimal.h"
#include "PolarisMeshDeformParam.h"
#include "PolarisMeshDeformParamArray.generated.h"

USTRUCT(BlueprintType)
struct FPolarisMeshDeformParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisMeshDeformParam> Params;
    
    POLARIS_API FPolarisMeshDeformParamArray();
};

