#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "ReplayFilter.h"
#include "PolarisUMGReplayList.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGReplayList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayList();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateReplayResultInfos();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateReplayPlayerNames();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UnselectButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleCheckButton(int32 Index, bool IsChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleCheckBoxVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleCheckAllButton(bool IsChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitleText(const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTabClickable(bool clickable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTabButtons(const UTexture2D* button_l, const UTexture2D* button_r);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTab(int32 Index, const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSortText(const FString& Display, const FString& Value, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayTipsInfo(int32 Index, int32 side, int32 punish_tips, int32 combo_tips, int32 crouch_tips, int32 throw_escape_tips);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayResultInfo(int32 Index, bool Visible, int32 round_1p, int32 round_2p);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayPlayerName(int32 Index, int32 side, const FString& player_name_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayPlayerInfo(int32 Index, int32 side, const UTexture2D* fighter_texture, const UTexture2D* rank_texture, const UTexture2D* platform_texture, const FString& player_name_text, const FString& tag_text0, const FString& tag_text1, const FString& tag_text2, const FString& tekken_power_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayGhostPlayer(int32 Index, int32 side, bool is_ghost);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayConsecWinsInfo(int32 Index, int32 side, int32 wins);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayCommonInfo(int32 Index, int32 data_no, bool favorite, const FString& date_text, const FString& play_count_text, const FString& match_text, const FString& version_text, const FString& stage_text, const UTexture2D* stage_texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMultiSelectingText(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLoadingIconEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetListScrollEnable(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFilters(const TArray<FReplayFilter>& Filters, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetEmptyText(const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectTab(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectButton(int32 Index, int32 Top, bool is_slided);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimShadeOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimShadeOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAnimButtonIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NavigateToButton(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimShadeOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimShadeOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlayAnimButtonIn();
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeButtonSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeButtonDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeButtonCheckedCallback(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideButton(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButton();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton();
    
};

