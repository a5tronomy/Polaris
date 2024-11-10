#include "BlackPenItem_Core.h"

FBlackPenItem_Core::FBlackPenItem_Core() {
    this->item_type = EBlackPenItemType::Item_None;
    this->Num = 0;
    this->consumable_flag = false;
    this->capacity = 0;
    this->order_no = 0;
}

