#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlayerCustomizeTitle.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlayerCustomizeTitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerCustomizeTitle();

    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
};

