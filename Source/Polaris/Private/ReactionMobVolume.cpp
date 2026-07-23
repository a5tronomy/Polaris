#include "ReactionMobVolume.h"

AReactionMobVolume::AReactionMobVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRandomReactionDelay = false;
    this->MaxRandomReactionDelay = 0.20f;
}

void AReactionMobVolume::OnWallHit(FEventOnWallHitParam Param) {
}

void AReactionMobVolume::OnRadialForce(FEventOnRadialForceParam Param) {
}

void AReactionMobVolume::onCriticalHit(FEventOnCriticalHitParam Param) {
}


