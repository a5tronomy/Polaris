#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudPowIcon.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudPowIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudPowIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePowerUpIconUniqueParam(int32 side, const TArray<int32>& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconVisibility(int32 side, bool new_visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconState(int32 side, int32 Value, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableIcon(bool Enable, bool reverse_icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangedPowerUpCounter(int32 Now, int32 Value);
    
};

