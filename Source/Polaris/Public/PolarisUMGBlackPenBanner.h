#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBlackPenBanner.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBlackPenBanner : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBlackPenBanner();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSelect(bool Selected);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsProcessing();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsOnSeason();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsAvailable();
    
    UFUNCTION(BlueprintCallable)
    void CallSelectCallback(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void CallDecideCallback();
    
};

