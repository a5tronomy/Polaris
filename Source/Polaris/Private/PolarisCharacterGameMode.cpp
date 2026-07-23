#include "PolarisCharacterGameMode.h"

APolarisCharacterGameMode::APolarisCharacterGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EffectManagerClass = NULL;
    this->DramaManagerClass = NULL;
    this->StageManagerClass = NULL;
    this->GCSuspendedFrames = 0;
    this->EnableGC = false;
}


