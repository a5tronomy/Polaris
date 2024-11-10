#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGFader.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGFader : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGFader();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSwitchDrawMode(bool is_black);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetDrawFlag(bool is_draw);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetDrawAlpha(bool is_black, float ALPHA);
    
};

