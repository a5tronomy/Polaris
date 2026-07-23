#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBackground.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBackground : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBackground();

    UFUNCTION(BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool In);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

