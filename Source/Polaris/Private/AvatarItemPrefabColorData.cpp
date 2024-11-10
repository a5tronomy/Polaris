#include "AvatarItemPrefabColorData.h"

FAvatarItemPrefabColorData::FAvatarItemPrefabColorData() {
    this->colorType = EAvatarColorType::Skin;
    this->materialParameterType = EAvatarMaterialParameterType::BaseColor01;
    this->colorPaletteType = EAvataColorPaletteType::Normal;
    this->specifyFocusPartType = false;
    this->focusPartType = EAvatarPartType::Face;
}

