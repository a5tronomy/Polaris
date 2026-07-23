#pragma once
#include "CoreMinimal.h"
#include "EGhostOrderState.h"
#include "EGhostOrderType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudGvG.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudGvG : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudGvG();

    UFUNCTION(BlueprintNativeEvent)
    void Show(bool NewShow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreOrder(int32 side, int32 orderIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOrderCount(int32 current_order_count_1p, int32 current_order_count_2p);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOrder2p(EGhostOrderType Type, EGhostOrderState State, int32 remain_time, int32 remain_count, bool is_initialize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOrder(EGhostOrderType Type, EGhostOrderState State, int32 remain_time, int32 remain_count, bool is_initialize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitHudOrderOnBattle(bool is_left, bool is_online_gvg, bool is_visible, int32 remain_time_threshold1, int32 remain_time_threshold2, int32 initial_battle_order_count, const FString& left_chr_id, const FString& right_chr_id, bool is_online_ghost_watch);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitHudOnRound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitHudOnBattle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ExecuteFeedback(bool is_positive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearPreOrder(int32 side);
    
};

