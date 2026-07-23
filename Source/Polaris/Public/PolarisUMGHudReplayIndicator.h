#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudReplayIndicator.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudReplayIndicator : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudReplayIndicator();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReplayCounter(int32 Now, int32 Max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFrameOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFrameInAnimation();
    
};

