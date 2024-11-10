#pragma once
#include "CoreMinimal.h"
#include "ETraceScaleType.h"
#include "PolarisTracePartsSetting.generated.h"

class UCurveFloat;
class UPolarisTraceKindDataAssetList;

USTRUCT(BlueprintType)
struct FPolarisTracePartsSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETraceScaleType ScaleType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Width;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* FrameScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTraceKindDataAssetList* KindDataAssetList;
    
    POLARIS_API FPolarisTracePartsSetting();
};

