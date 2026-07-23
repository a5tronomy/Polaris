#include "PolarisStoreFunctionLibrary.h"

UPolarisStoreFunctionLibrary::UPolarisStoreFunctionLibrary() {
}

void UPolarisStoreFunctionLibrary::SettingStoreTitleColor(UPolarisTextBlock* tb_title, FStoreTitleTextColorStruct color_data, bool enable_outline) {
}

void UPolarisStoreFunctionLibrary::RecordShortcutKeyPress() {
}

bool UPolarisStoreFunctionLibrary::IsSpecificLogoDisplayRequiredInStore() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsShopBalloonNetUpdating() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsItemSalesMaintenanceStatus() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsInExtraStageBlackPen() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsInExtraStage(int32 current_lv, int32 max_level, int32 add_max_level) {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsEnableStoreTestSetting() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsEnableLimitedOwnedButton() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsDisablePF() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsDisableOtherMenu() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsCoinSalesMaintenanceStatus() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsCoinConsumptionMaintenanceStatus() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsArabic() {
    return false;
}

bool UPolarisStoreFunctionLibrary::IsAlertNeededInStore() {
    return false;
}

void UPolarisStoreFunctionLibrary::IngameStoreViewerDestroyAllNiagaraEffects() {
}

void UPolarisStoreFunctionLibrary::IngameStoreViewerDestroyAllDecals() {
}

void UPolarisStoreFunctionLibrary::IngameStoreClickCharaIcon(int32 button_index) {
}

bool UPolarisStoreFunctionLibrary::HasItemTypeInStore(EStoreItemType target_type) {
    return false;
}

int32 UPolarisStoreFunctionLibrary::GetUpdateVcNoInStore() {
    return 0;
}

FName UPolarisStoreFunctionLibrary::GetStoreIconIdFromSetId(const FName& item_id) {
    return NAME_None;
}

FText UPolarisStoreFunctionLibrary::GetStoreCategoryTitleRawText(EStoreItemType Type) {
    return FText::GetEmpty();
}

FString UPolarisStoreFunctionLibrary::GetLatestBalloonRemainingTimeString() {
    return TEXT("");
}

int32 UPolarisStoreFunctionLibrary::GetLatestBalloonRemainingTime() {
    return 0;
}

void UPolarisStoreFunctionLibrary::GetLatestBalloonInfo(FString& _out_raw_text, int32& _out_color_idx) {
}

int32 UPolarisStoreFunctionLibrary::GetCurrentVerNo() {
    return 0;
}

int32 UPolarisStoreFunctionLibrary::GetCurrentVcNumInStore() {
    return 0;
}

bool UPolarisStoreFunctionLibrary::EnableBlackPenScene() {
    return false;
}

FString UPolarisStoreFunctionLibrary::ConvertStoreItemRemainingTimeText(int32 remaining_sec) {
    return TEXT("");
}

void UPolarisStoreFunctionLibrary::ConfigureInfomationID(const FName& info_id) {
}


