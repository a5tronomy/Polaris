#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStoreItemType.h"
#include "StoreTitleTextColorStruct.h"
#include "PolarisStoreFunctionLibrary.generated.h"

class UPolarisTextBlock;

UCLASS(BlueprintType)
class POLARIS_API UPolarisStoreFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisStoreFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SettingStoreTitleColor(UPolarisTextBlock* tb_title, FStoreTitleTextColorStruct color_data, bool enable_outline);
    
    UFUNCTION(BlueprintCallable)
    static void RecordShortcutKeyPress();
    
    UFUNCTION(BlueprintPure)
    static bool IsSpecificLogoDisplayRequiredInStore();
    
    UFUNCTION(BlueprintPure)
    static bool IsShopBalloonNetUpdating();
    
    UFUNCTION(BlueprintPure)
    static bool IsItemSalesMaintenanceStatus();
    
    UFUNCTION(BlueprintPure)
    static bool IsInExtraStageBlackPen();
    
    UFUNCTION(BlueprintPure)
    static bool IsInExtraStage(int32 current_lv, int32 max_level, int32 add_max_level);
    
    UFUNCTION(BlueprintPure)
    static bool IsEnableStoreTestSetting();
    
    UFUNCTION(BlueprintPure)
    static bool IsEnableLimitedOwnedButton();
    
    UFUNCTION(BlueprintPure)
    static bool IsDisablePF();
    
    UFUNCTION(BlueprintPure)
    static bool IsDisableOtherMenu();
    
    UFUNCTION(BlueprintPure)
    static bool IsCoinSalesMaintenanceStatus();
    
    UFUNCTION(BlueprintPure)
    static bool IsCoinConsumptionMaintenanceStatus();
    
    UFUNCTION(BlueprintPure)
    static bool IsArabic();
    
    UFUNCTION(BlueprintPure)
    static bool IsAlertNeededInStore();
    
    UFUNCTION(BlueprintCallable)
    static void IngameStoreViewerDestroyAllNiagaraEffects();
    
    UFUNCTION(BlueprintCallable)
    static void IngameStoreViewerDestroyAllDecals();
    
    UFUNCTION(BlueprintCallable)
    static void IngameStoreClickCharaIcon(int32 button_index);
    
    UFUNCTION(BlueprintPure)
    static bool HasItemTypeInStore(EStoreItemType target_type);
    
    UFUNCTION(BlueprintPure)
    static int32 GetUpdateVcNoInStore();
    
    UFUNCTION(BlueprintPure)
    static FName GetStoreIconIdFromSetId(const FName& item_id);
    
    UFUNCTION(BlueprintPure)
    static FText GetStoreCategoryTitleRawText(EStoreItemType Type);
    
    UFUNCTION(BlueprintPure)
    static FString GetLatestBalloonRemainingTimeString();
    
    UFUNCTION(BlueprintPure)
    static int32 GetLatestBalloonRemainingTime();
    
    UFUNCTION(BlueprintPure)
    static void GetLatestBalloonInfo(FString& _out_raw_text, int32& _out_color_idx);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCurrentVerNo();
    
    UFUNCTION(BlueprintPure)
    static int32 GetCurrentVcNumInStore();
    
    UFUNCTION(BlueprintPure)
    static bool EnableBlackPenScene();
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertStoreItemRemainingTimeText(int32 remaining_sec);
    
    UFUNCTION(BlueprintCallable)
    static void ConfigureInfomationID(const FName& info_id);
    
};

