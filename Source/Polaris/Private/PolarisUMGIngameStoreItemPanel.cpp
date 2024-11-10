#include "PolarisUMGIngameStoreItemPanel.h"

UPolarisUMGIngameStoreItemPanel::UPolarisUMGIngameStoreItemPanel() {
    this->enable_item_info = false;
    this->is_owned = false;
}

void UPolarisUMGIngameStoreItemPanel::UpdateScrollText(float delta_time) {
}


void UPolarisUMGIngameStoreItemPanel::SendNotifyTransPickup(const FName& banner_id) {
}

void UPolarisUMGIngameStoreItemPanel::SendNotifyTransDetails() {
}

void UPolarisUMGIngameStoreItemPanel::SendNotifyTransCategory(EStoreItemType Type) {
}

void UPolarisUMGIngameStoreItemPanel::ResetScrollText() {
}

void UPolarisUMGIngameStoreItemPanel::RepItemInfo_Implementation(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreItemPanel::RefreshItemWidget(FStoreItemPanelStruct item_data) {
}


void UPolarisUMGIngameStoreItemPanel::ObserveFirstWidgetDisplay() {
}

void UPolarisUMGIngameStoreItemPanel::NotifyTransItemDetail() {
}

void UPolarisUMGIngameStoreItemPanel::NotifySelectItem() {
}

void UPolarisUMGIngameStoreItemPanel::NotifySelectCoin() {
}

void UPolarisUMGIngameStoreItemPanel::NotifyReturnMenuControl() {
}

void UPolarisUMGIngameStoreItemPanel::NotifyPurchaseItem() {
}

UTexture2D* UPolarisUMGIngameStoreItemPanel::FindItemThumbnail(FName item_id) {
    return NULL;
}


