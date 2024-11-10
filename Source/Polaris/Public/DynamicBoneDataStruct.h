#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneBoneOverrideDataStruct.h"
#include "DynamicBoneVariationStruct.h"
#include "DynamicBoneDataStruct.generated.h"

class UPhoenixDynamicBoneBinary;

USTRUCT(BlueprintType)
struct POLARIS_API FDynamicBoneDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhoenixDynamicBoneBinary* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhoenixDynamicBoneBinary* Data_Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDynamicBoneVariationStruct> Data_Variations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResetDeltaTimeMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDynamicBoneBoneOverrideDataStruct> DynamicBoneBoneOverrideData;
    
    FDynamicBoneDataStruct();
};

