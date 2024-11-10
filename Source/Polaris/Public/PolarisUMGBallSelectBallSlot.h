#pragma once
#include "CoreMinimal.h"
#include "BallSlotSettingInfo.h"
#include "EPolarisUMGBallSelectBallSlotMoveType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBallSelectBallSlot.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBallSelectBallSlot : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBallSelectBallSlot();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowSlotPanelUMG();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetInfoUMG(const FString& Info);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitializeUMG(int32 side, const FString& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideSlotPanelUMG();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDecideSlotUMG(int32 current_slot_index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCursorMoveUMG(int32 ball_slot_num, int32 current_slot_index, int32 disp_cursor_index, int32 disp_slot_left_index, EPolarisUMGBallSelectBallSlotMoveType move_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateSlotPanelUMG(const TArray<FBallSlotSettingInfo>& InfoArray);
    
    UFUNCTION(BlueprintCallable)
    void CallSelectSlotCallback(int32 slot_num);
    
    UFUNCTION(BlueprintCallable)
    void CallDecideSlotCallback(int32 slot_num);
    
    UFUNCTION(BlueprintCallable)
    void CallCursorRightCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallCursorLeftCallback();
    
};

