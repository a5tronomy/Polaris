#include "PolarisDramaTrackActor.h"

APolarisDramaTrackActor::APolarisDramaTrackActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorTransformType = EDramaTrackActorTransformType::None;
    this->FighterNameForFate = TEXT("---");
    this->FighterNameForEffect = TEXT("---");
}

int32 APolarisDramaTrackActor::GetCurrentPlayerID() {
    return 0;
}


