#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "TopStats.h"
#include "PolarisUMGPlayerCustomizeMenu.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlayerCustomizeMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerCustomizeMenu();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateSelectedMenu(int32 Index, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNewMarkShogoBg(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNewMarkShogo(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNewMarkPlayerPanel(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNewMarkMenu(int32 Index, bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateNewMarkGauge(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLockedShogoBg(int32 no, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLockedShogo(int32 no, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLockedPlayerPanel(int32 no, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLockedGauge(int32 no, bool Locked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityList(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupShogoBg(int32 no, const FString& text_id, const UTexture2D* Icon, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, const FString& special_shogo_text_id, bool is_lock_hidden, bool is_dlc_hidden, bool is_fight_pass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupShogo(int32 no, const FString& text_id, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, bool is_lock_hidden, bool is_dlc_hidden, bool is_fight_pass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupPlayerPanel(int32 no, const FString& text_id, const UTexture2D* Icon, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, bool is_lock_hidden, bool is_dlc_hidden, bool is_fight_pass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupMenuButton(int32 Index, const UTexture2D* Icon, const FString& text_id, bool Valid);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupMagicMirror(int32 no, bool onoff);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupGauge(int32 no, const FString& text_id, const UTexture2D* Icon, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, bool is_lock_hidden, bool is_dlc_hidden, bool is_fight_pass);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSelectedItemName(const FString& text_id, int32 rarity);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewTopStats(int32 Index, const FTopStats& top_stats);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewTekkenPower(int32 tekken_power);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewShogoBg(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewShogo(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewRank(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewPlayerPanel(bool onoff, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewPlayerName(const FText& player_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewPlatformTag(int32 platform_tag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewGauge(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewCharacter(const UTexture2D* texture_face, const UTexture2D* texture_name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPreviewArea(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFightMoney(int64 fight_money);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectShogoBg(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectShogo(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectPlayerPanel(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectMagicMirror(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SelectGauge(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestAnimIO(bool In);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeShogoList(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeShogoBgList(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializePlayerPanelList(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeMagicMirrorList(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeGaugeList(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMenuSelectIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMenuClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimMenuBackSelectIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool HasFinishedAnimClick();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EquipShogoBg(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EquipShogo(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EquipPlayerPanel(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EquipMagicMirror(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EquipGauge(int32 no, bool Force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideShogoBg(int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideShogo(int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecidePlayerPanel(int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMenu(int32 item_index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideMagicMirror(int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DecideGauge(int32 no);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BackMenu(int32 item_index);
    
};

