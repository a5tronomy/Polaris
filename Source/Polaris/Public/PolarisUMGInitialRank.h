#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGInitialRank.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGInitialRank : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGInitialRank();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton(int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTekkenPower(int32 tekken_power);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRank(UTexture2D* rank_icon, UTexture2D* rank_no_icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtherCharRankText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectButton(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideButton(int32 ID);
    
};

