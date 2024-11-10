#pragma once
#include "CoreMinimal.h"
#include "ESessionBattleResult.h"
#include "PlayerMatchBattleGroupTabData.h"
#include "PlayerMatchPlayerInfo.h"
#include "PolarisUserWidget.h"
#include "SessionPlayerName.h"
#include "SessionRule.h"
#include "PolarisUMGPlayerMatchSessionRoom.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlayerMatchSessionRoom : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerMatchSessionRoom();

    UFUNCTION(BlueprintImplementableEvent)
    void WaitConfirm(const FString& cosmos_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateBattleGroupCursor(int32 group_cursor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartFighting(int32 group_index, bool showing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartBattle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Skip(const FString& cosmos_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Setup(int32 max_join_num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSessionRule(FSessionRule sesstion_rule);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerNum(int32 current_num, int32 max_num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOwnBattleGroup(int32 group_index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHostName(FSessionPlayerName host_player_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGrpupTabOperationEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBattleGroupTabs(const TArray<FPlayerMatchBattleGroupTabData>& battle_group_tab_datas);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBattleGroup(const TArray<FPlayerMatchPlayerInfo>& player_info_list, bool in_fighting);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemovePlayer(const FString& cosmos_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshPlayerNames();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayShowingAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayGroupSwitchAnimation(bool is_left);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectTab(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestConfirmWait();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestConfirm();
    
    UFUNCTION(BlueprintImplementableEvent)
    void MoveGroup(FPlayerMatchPlayerInfo player_info);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasConfirmed(const FString& cosmos_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    FPlayerMatchPlayerInfo GetRightBattlePlayerInfo();
    
    UFUNCTION(BlueprintImplementableEvent)
    FPlayerMatchPlayerInfo GetLeftBattlePlayerInfo();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetBattleGroupCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetBattleGroupCount();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinishBattle(const FString& cosmos_id, ESessionBattleResult Result, bool reached_win_limit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Confirm(const FString& cosmos_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanWaitConfirm() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CancelWaitingConfirm();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CancelSkip(const FString& cosmos_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddPlayer(const FPlayerMatchPlayerInfo& player_info);
    
};

