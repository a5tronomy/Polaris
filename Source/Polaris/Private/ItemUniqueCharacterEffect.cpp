#include "ItemUniqueCharacterEffect.h"

FItemUniqueCharacterEffect::FItemUniqueCharacterEffect() {
    this->UniqueharacterEffectAsset = NULL;
    this->EffectId = 0;
    this->isAttachedCharacter = false;
    this->isSelfRotation = false;
    this->isDispUI = false;
    this->isGetAitePosition = false;
    this->SortPriority = 0;
    this->isAutoDestroy = false;
    this->isPlaySound = false;
    this->isGetMesh = false;
}

