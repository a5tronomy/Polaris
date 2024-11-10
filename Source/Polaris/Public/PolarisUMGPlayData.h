#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayDataPageType.h"
#include "EPolarisUMGPlayDataSortType.h"
#include "EPolarisUMGPlayDataStatsType.h"
#include "PolarisUMGPlayDataCharaItemStruct.h"
#include "PolarisUMGPlayDataStageItemStruct.h"
#include "PolarisUMGPlayDataStatsItemStruct.h"
#include "PolarisUMGPlayDataTblItemStruct.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlayData.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGPlayData : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayData();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateTotalWinItemValue(int32 Num, const FString& item_value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTekkenPowerText(const FText& tekken_power);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankIcon(const UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPolarisID(const FText& polaris_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerName(const FText& player_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformTag(int32 platform_tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformID(const FText& platform_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharaIcon(const UTexture2D* Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectTab(int32 ID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectSortkey(int32 Num, bool is_force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectPage(EPolarisUMGPlayDataPageType Type);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectChara(int32 Num, bool is_online, bool is_force);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlaySortOpenAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlaySortCloseAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutCharaListAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutCharaItemAnimation(bool is_online);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInCharaListAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInCharaItemAnimation(bool is_online);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayDecideSortkeyAnimation(int32 Num);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayDecideCharaAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateTab(const TArray<FString>& tabs);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateStageWin(const TArray<FPolarisUMGPlayDataStageItemStruct>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreatePlayStatsWin(const TArray<FPolarisUMGPlayDataTblItemStruct>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreatePlayStatsEvaluateWin(EPolarisUMGPlayDataStatsType Type, const FString& header_id, int32 header_value, const TArray<FPolarisUMGPlayDataStatsItemStruct>& items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreatePlayStatsChart(const TArray<float>& Values);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreatePlayRecordWin(const TArray<FPolarisUMGPlayDataTblItemStruct>& total_items, const TArray<FPolarisUMGPlayDataTblItemStruct>& battle_items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateOthersWin(const TArray<FPolarisUMGPlayDataTblItemStruct>& online_items, const TArray<FPolarisUMGPlayDataTblItemStruct>& offline_items);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateCharaRankWin(const TArray<FPolarisUMGPlayDataCharaItemStruct>& items, EPolarisUMGPlayDataSortType sort_type, bool is_online);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateCharaOnlineWin(const TArray<FPolarisUMGPlayDataTblItemStruct>& items, const UTexture2D* chara_icon, const UTexture2D* name_icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateCharaOfflineWin(const TArray<FPolarisUMGPlayDataTblItemStruct>& items, const UTexture2D* chara_icon, const UTexture2D* name_icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateBattleOnlineWin(const TArray<FPolarisUMGPlayDataTblItemStruct>& battle_items);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSortkeySelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSortkeyDecideCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSortDecideCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemDecideCallback(int32 ID);
    
};

