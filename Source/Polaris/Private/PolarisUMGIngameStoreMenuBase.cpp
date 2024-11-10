#include "PolarisUMGIngameStoreMenuBase.h"

UPolarisUMGIngameStoreMenuBase::UPolarisUMGIngameStoreMenuBase() {
    this->_tb_title_name = TEXT("tb_title");
    this->is_use_viewer_menu = false;
}

void UPolarisUMGIngameStoreMenuBase::SetCategoryTitleColor_Implementation(FStoreTitleTextColorStruct Color) {
}

void UPolarisUMGIngameStoreMenuBase::RequestTransScene(GS_StoreMenuType after) {
}

void UPolarisUMGIngameStoreMenuBase::RequestTransPickUp(FPickupShowcase pick_up_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestTransPFStoreHome() {
}

void UPolarisUMGIngameStoreMenuBase::RequestTransItemList(EStoreItemType request_type, int32 fighter_idx) {
}

void UPolarisUMGIngameStoreMenuBase::RequestTransDetail(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestTransBlackPenFromHome() {
}

void UPolarisUMGIngameStoreMenuBase::RequestTransBlackPenDetail(FBlackPenItem item_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestPurductItemListDialogDetail(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestPurductBlackPenItemListDialogDetail(const FBlackPenItem& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestPurchaseDialog(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestPFStoreDLC(const FName& dlc_item_id) {
}

void UPolarisUMGIngameStoreMenuBase::RequestItemViewer(const FStoreItemPanelStruct& item_data, bool is_bottom_layer) {
}

void UPolarisUMGIngameStoreMenuBase::RequestHiddenItemViewer() {
}

void UPolarisUMGIngameStoreMenuBase::RequestExclusiveDialog(const FName& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestEquipCharacterDialog(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::RequestEquipCharacterBlackPenDialog(const FName& item_id, const FName& set_item_id) {
}

void UPolarisUMGIngameStoreMenuBase::RequestChangeDispBackGround(bool Enable) {
}

void UPolarisUMGIngameStoreMenuBase::RequestCatalogVcDialog() {
}

void UPolarisUMGIngameStoreMenuBase::RequestBlackPenItemViewer(const FBlackPenItem& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::PrintCallStack() {
}

void UPolarisUMGIngameStoreMenuBase::PreRequestItemViewer(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::PreRequestBlackPenItemViewer(const FBlackPenItem& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::NotifySendRequestPurchase(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreMenuBase::NotifyCancelPurchase() {
}

void UPolarisUMGIngameStoreMenuBase::NotifyBackGroundFade(EPolarisIngameStoreFaderLevel fade_level) {
}




