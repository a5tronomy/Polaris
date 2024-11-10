#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplayDialog.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGReplayDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayDialog();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateButton(int32 ID, const FString& Text, bool is_raw_text, bool is_enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayResultInfo(bool Visible, int32 round_1p, int32 round_2p);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayPlayerName(int32 side, const FString& player_name_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayPlayerInfo(int32 side, const UTexture2D* fighter_texture, const UTexture2D* rank_texture, const UTexture2D* platform_texture, const FString& player_name_text, const FString& tag_text0, const FString& tag_text1, const FString& tag_text2, const FString& tekken_power_text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetReplayCommonInfo(const FString& date_text, const FString& play_count_text, const FString& match_text, const FString& version_text, const FString& stage_text, const UTexture2D* stage_texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
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
    void DecideMenu(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClearButtons();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddButton(const FString& Text, bool is_raw_text, bool is_enable);
    
};

