#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTutorialTelop.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMTutorialTelop : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTutorialTelop();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTitleTextId(FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTelopTextId(FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetButtonTextId(FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIn();
    
};

