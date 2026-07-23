#include "AvatarItemColorData.h"

FAvatarItemColorData::FAvatarItemColorData() {
    this->color_type = EAvatarColorType::Skin;
    this->material_parameter_type = EAvatarMaterialParameterType::BaseColor01;
    this->color_palette_id = 0;
    this->focus_part_type = EAvatarPartType::Face;
}

