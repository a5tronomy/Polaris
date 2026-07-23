#include "AvatarItemInvalidData.h"

FAvatarItemInvalidData::FAvatarItemInvalidData() {
    this->item_id = 0;
    this->release_version = 0;
    this->Flags = EAvatarItemInvalidFlags::None;
}

