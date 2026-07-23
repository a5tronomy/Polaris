#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickDefaultParam.generated.h"

class UAnimationAsset;

USTRUCT()
struct FPolarisStageGimmickDefaultParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimationAsset* AnimationAsset;
    
    POLARIS_API FPolarisStageGimmickDefaultParam();
};

