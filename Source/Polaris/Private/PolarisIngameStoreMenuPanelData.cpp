#include "PolarisIngameStoreMenuPanelData.h"

UPolarisIngameStoreMenuPanelData::UPolarisIngameStoreMenuPanelData() {
    this->select_type_ = EStoreItemType::E_CHR;
    this->texture_ = NULL;
    this->reference_button = NULL;
    this->enable_category_item = false;
}

void UPolarisIngameStoreMenuPanelData::Unselect_Implementation() {
}

void UPolarisIngameStoreMenuPanelData::Select_Implementation() {
}

void UPolarisIngameStoreMenuPanelData::Decide_Implementation() {
}

void UPolarisIngameStoreMenuPanelData::CreatePanelData(EStoreItemType select_type, UTexture2D* Texture, const FText& title_text, bool enable_category) {
}

void UPolarisIngameStoreMenuPanelData::Configure(int32 ID, UPolarisIngameStoreMenuPanelData::FAction OnDecide, UPolarisIngameStoreMenuPanelData::FAction OnSelect, UPolarisIngameStoreMenuPanelData::FAction onUnselect) {
}


