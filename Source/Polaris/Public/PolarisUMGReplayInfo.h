#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGReplayInfoIconType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplayInfo.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGReplayInfo : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayInfo();

    UFUNCTION(BlueprintImplementableEvent)
    void SetIcon(EPolarisUMGReplayInfoIconType Type, bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayOnAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayOffAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayInAnimation();
    
};

