#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGhostLearning.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGGhostLearning : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGhostLearning();

    UFUNCTION(BlueprintImplementableEvent)
    void OnOut(bool isrightside);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNotify(bool isrightside);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn(bool isrightside);
    
};

