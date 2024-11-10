#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneVariationStruct.generated.h"

class UPhoenixDynamicBoneBinary;

USTRUCT(BlueprintType)
struct POLARIS_API FDynamicBoneVariationStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhoenixDynamicBoneBinary* Data;
    
    FDynamicBoneVariationStruct();
};

