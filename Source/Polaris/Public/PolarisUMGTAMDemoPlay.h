#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMDemoPlay.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMDemoPlay : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMDemoPlay();

    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimIn();
    
};

