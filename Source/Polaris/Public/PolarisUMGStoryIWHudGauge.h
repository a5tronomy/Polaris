#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisUMGHudGaugeType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWHudGauge.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWHudGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWHudGauge();

    UFUNCTION(BlueprintImplementableEvent)
    void ZoneShowTimer(float Ratio);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ZoneShowEnable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ZoneShowDisable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateZoneRechargeValue(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTimer(int32 Time);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHealth(float ratio_hp, float ratio_heal, EPolarisUMGHudGaugeType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateGuideSprite(bool is_visible, bool is_versus, bool is_player, FVector position, float Radius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateCombo(int32 combo_cnt);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleZoneGauge(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartZoneRecharge();
    
    UFUNCTION(BlueprintNativeEvent)
    void ShowHudGauge(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOnlineId(const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGaugeAnimFlag(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterNameTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFighterBGTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PrepareHudFrameInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHudFrameOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayHudFrameInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayFrameInAnimation(EPolarisUMGHudGaugeType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageArts();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitOnRound();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitOnBattle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageMiddle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDamageLow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedZoneCounter(int32 Now, int32 Max, int32 Val);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FinishZoneRecharge();
    
};

