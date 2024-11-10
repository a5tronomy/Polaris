#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGControllerSetting.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGControllerSetting : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGControllerSetting();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatePage(int32 page);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateCursor(int32 page, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateCheckDialog(int32 arrow_num, bool is_lp, bool is_rp, bool is_lk, bool is_rk, bool is_rage, bool is_zone_drive, bool is_assist);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateButton(int32 page, int32 ID, int32 Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowTitle(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowCheckDialog(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowBackground(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetPlayerSide(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayFrameOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayFrameInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayDecideAnimation(int32 page, int32 ID, int32 Direction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnableButtons(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnClearButtons();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddTypeButton(int32 page, int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddMoveButton(int32 page, int32 ID, const FString& textId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddEditableButton(int32 page, int32 ID, const FString& Command, const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddCommandButton(int32 page, int32 ID, const FString& textId);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecide(int32 page, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeTypeRight(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeTypeLeft(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeMoveRight(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeMoveLeft(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeCursor(int32 page, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAnimEnd(bool is_frame_in, bool is_frame_out, bool is_decide, bool is_check_dialog);
    
};

