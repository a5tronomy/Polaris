#include "PolarisUMGIngameStoreHome.h"

UPolarisUMGIngameStoreHome::UPolarisUMGIngameStoreHome() {
    this->current_state = EStoreHomeState::Top;
}

bool UPolarisUMGIngameStoreHome::IsFirestLine(int32 coursor_y) const {
    return false;
}

bool UPolarisUMGIngameStoreHome::IsEndLine(int32 coursor_y) const {
    return false;
}

UTexture2D* UPolarisUMGIngameStoreHome::GetPickUpBanner(EStoreItemAttribute sell_type) {
    return NULL;
}







