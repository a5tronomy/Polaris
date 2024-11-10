#include "PolarisUMGIngameStoreItemMenuDetail.h"

UPolarisUMGIngameStoreItemMenuDetail::UPolarisUMGIngameStoreItemMenuDetail() {
    this->target_item_price = 0;
    this->max_width_num = 3;
    this->is_root_item = true;
    this->is_all_owned_in_sell_data = false;
}

void UPolarisUMGIngameStoreItemMenuDetail::UpdateWarningText_Implementation() {
}


void UPolarisUMGIngameStoreItemMenuDetail::RepItemInfo_Implementation(const FStoreItemPanelStruct& item_data) {
}

bool UPolarisUMGIngameStoreItemMenuDetail::IsFree() const {
    return false;
}



void UPolarisUMGIngameStoreItemMenuDetail::AddSetItem_Implementation(const FStoreItemPanelStruct& item_data) {
}


