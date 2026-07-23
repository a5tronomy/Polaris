#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudCharIcon.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudCharIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudCharIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateProstrationState(int32 side, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProstrationEnable(bool Enable, bool reverse_icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterRimTexture(int32 side, const UTexture2D* Texture);
    
};

