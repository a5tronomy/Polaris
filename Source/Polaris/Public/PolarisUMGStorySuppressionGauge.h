#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStorySuppressionGauge.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStorySuppressionGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStorySuppressionGauge();

    UFUNCTION(BlueprintImplementableEvent)
    void SetSuppressionGauge(float Percent);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasAnimationFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

