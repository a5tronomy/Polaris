#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGQuickSelectButton.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGQuickSelect.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGQuickSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGQuickSelect();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateStage(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePlaySide(int32 side, const FString& text_next, const FString& text_prev, int32 lr, int32 Item, int32 item_max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCustomize(int32 side, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCPU(int32 side, const FString& text_next, const FString& text_prev, int32 lr, int32 Item, int32 item_max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCharacter(int32 side, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBallDamage(int32 side, const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBall(int32 side, const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHeader(int32 left_type, int32 right_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDisableMouse(int32 side, bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBgVisibility(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenu(int32 side, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimDecide(int32 side, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Play1PAnimCenter();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowButtonClickCallback(int32 side, int32 ID, int32 lr);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeMenu(const TArray<FPolarisUMGQuickSelectButton>& item_names_1p, const TArray<FPolarisUMGQuickSelectButton>& item_names_2p);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EnableMenu(int32 side, bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMenu(int32 side, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeMouseOwnership(int32 side);
    
};

