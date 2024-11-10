#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMHUDMask.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMHUDMask : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMHUDMask();

    UFUNCTION(BlueprintImplementableEvent)
    void OnZoneMaskOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZoneMaskIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZoneFrameOut_L();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZoneFrameIn_L();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetText(FName Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetMaskVisibility(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMaskOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMaskIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeatEnergyOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeatEnergyIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFrameOut_R();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFrameOut_L();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFrameIn_R();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFrameIn_L();
    
};

