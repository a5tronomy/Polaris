#include "PolarisUMGIngameStoreMenu.h"

UPolarisUMGIngameStoreMenu::UPolarisUMGIngameStoreMenu() {
    this->update_vc_no = -1;
    this->is_show_title = false;
}



















GS_StoreMenuType UPolarisUMGIngameStoreMenu::GetCurrentCategory() const {
    return GS_StoreMenuType::Home;
}







void UPolarisUMGIngameStoreMenu::ChangeCurrentCategory_Implementation(GS_StoreMenuType Category) {
}


void UPolarisUMGIngameStoreMenu::CallChangeCategory(GS_StoreMenuType new_category) {
}



