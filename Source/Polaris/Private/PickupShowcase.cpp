#include "PickupShowcase.h"

FPickupShowcase::FPickupShowcase() {
    this->_order = 0;
    this->_sellType = EStoreItemAttribute::None;
    this->check_owned_status = false;
    this->enabled_when_owned = false;
}

