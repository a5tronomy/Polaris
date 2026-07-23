#include "CustomizeItem.h"

UCustomizeItem::UCustomizeItem() {
    this->UseHairMaterial = false;
    this->ChangeAltSkinColor = false;
    this->ItemOffsetSlotNameEdit = TEXT("POS_NONE");
}

bool UCustomizeItem::GetDesignAssign(int32 _Material_Num, int32 _Color_ID_Num, FDesignAssignStruct& _SourceDesignAssign) const {
    return false;
}


