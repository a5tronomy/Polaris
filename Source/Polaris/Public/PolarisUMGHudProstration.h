#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudProstration.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudProstration : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudProstration();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIconState(int32 side, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableIcon(bool Enable, bool reverse_icon);
    
};

