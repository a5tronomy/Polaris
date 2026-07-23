#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharacterCustomizeBG.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGCharacterCustomizeBG : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCharacterCustomizeBG();

    UFUNCTION(BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FrameIn();
    
};

