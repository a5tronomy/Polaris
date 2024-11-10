#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneParam.h"
#include "DynamicBoneBustParam.generated.h"

USTRUCT(BlueprintType)
struct FDynamicBoneBustParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 RefId;
    
    UPROPERTY(EditAnywhere)
    int32 RVer;
    
    UPROPERTY(EditAnywhere)
    FDynamicBoneParam L_Bust;
    
    UPROPERTY(EditAnywhere)
    FDynamicBoneParam R_Bust;
    
    UPROPERTY(EditAnywhere)
    float verticalRotOffset;
    
    UPROPERTY(EditAnywhere)
    float verticalRotOffsetAdd;
    
    UPROPERTY(EditAnywhere)
    float turnBoostOffset;
    
    POLARIS_API FDynamicBoneBustParam();
};

