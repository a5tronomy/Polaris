#include "PolarisBallBaseActor.h"

APolarisBallBaseActor::APolarisBallBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BallId = 0;
    this->IsVisibleActor = true;
    this->IsToPlayAnimation = false;
    this->AnimationState = EAnimState::Off;
    this->AnimationFrame = -1.00f;
    this->FresnelIntensity = 0.00f;
}


