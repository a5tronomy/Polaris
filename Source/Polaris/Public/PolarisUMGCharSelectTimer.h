#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharSelectTimer.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCharSelectTimer : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCharSelectTimer();

    UFUNCTION(BlueprintImplementableEvent)
    void SetTimerNum(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayInAnimation();
    
};

