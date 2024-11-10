#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisUMGHudGaugeType.h"
#include "PolarisUserWidget.h"
#include "UiCommunicationStatus.h"
#include "PolarisUMGHudGauge.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGHudGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudGauge();

    UFUNCTION(BlueprintImplementableEvent)
    void ZoneShowTimer(int32 side, float Ratio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ZoneShowGauge(int32 side, float Ratio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ZoneShowEnable(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ZoneShowDisable(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTimer(int32 Time);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateStar(int32 side, int32 Count);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateRTT(int32 Max, int32 Min, int32 Average, int32 median, float loss_rate_up, float loss_rate_down, bool is_relayed, bool is_host, int32 antenna, int32 Delay, int32 max_rollback, int32 Count, int32 total_frame, int32 last_frame, int32 key_wait_total_frame, int32 key_wait_frame);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePowerUpIconVisibility(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePowerUpIconUniqueParam(int32 side, const TArray<int32>& Params);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePowerUpIcon(int32 side, int32 Val, int32 Max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHealth_New(int32 side, float ratio_hp, float ratio_heal, EPolarisUMGHudGaugeType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHealth(int32 side, float ratio_hp, float ratio_heal, bool is_rage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateGuideSprite(int32 side, bool is_visible, bool is_versus, bool is_player, bool is_ghost, FVector position, float Radius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCommunicationStatus(FUiCommunicationStatus Status);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleZoneGauge(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowRTT(bool flag);
    
    UFUNCTION(BlueprintNativeEvent)
    void ShowHudGauge(bool flag, bool Ignore, bool left_is_enable_zone, bool right_is_enable_zone);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowHpRate(int32 Value1, int32 Value2);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCommunicationStatus(bool flag, bool left_display_proc_drop, bool right_display_proc_drop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTekkenPowerVisibility(int32 side, bool Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTekkenPower(int32 side, int32 tp, bool is_online);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStarMax(int32 side, int32 Max);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStage(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetShogoText(int32 side, const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetShogoBGTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRankTexture(int32 rank, const UTexture2D* Texture, const UTexture2D* num_texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPowerUpIconWidget(int32 side, const UPolarisUserWidget* Widget, bool Reverse);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPowerUpIconTexture(int32 side, const UTexture2D* Texture, bool Reverse);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlatformIconTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlatformIconGhost(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOnlineId(int32 side, const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLeaderIcon(int32 side, bool is_leader);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGaugeTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGaugeAnimFlag(int32 side, bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterNameTexture2(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterNameTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterBGTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterBGFullTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCustomizeEnable(bool is_customized);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ResetGaugeAnim(int32 side, float hp_ratio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PrepareHudFrameInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayRankNumAnim();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHudFrameOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHudFrameInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHealAnimation(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFrameInAnimation_New(EPolarisUMGHudGaugeType type1, EPolarisUMGHudGaugeType type2);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFrameInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayAntiHealDamageAnimation(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetWinningStreakPosition(bool bUp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetWinningStreak(int32 side, int32 wins, bool is_visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetTopUIPosition(float pos_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetProfile(int32 side, const FString& user_name, int32 rank, int32 match_type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetBottomUIPosition(float pos_y);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageOff(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageArts(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRage(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitOnRound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitOnBattle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageMiddle(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageLow(int32 side);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedZoneCounter(int32 side, int32 Now, int32 Max, int32 Val);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedPowerUpCounter(int32 side, int32 Now, int32 Val);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedName(int32 side, const FString& user_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedDuringComboFlag(int32 side, bool F);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideHpRate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AttachStoryModePatch(int32 star_max);
    
};

