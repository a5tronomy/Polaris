#include "AvatarItemPrefab.h"

UAvatarItemPrefab::UAvatarItemPrefab() {
    this->SkeletalMesh = NULL;
    this->StaticMesh = NULL;
    this->autoReplaceForHead = false;
    this->autoReplaceForBeard = false;
}

bool UAvatarItemPrefab::CanOverride() const {
    return false;
}


