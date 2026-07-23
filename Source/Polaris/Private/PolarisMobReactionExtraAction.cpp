#include "PolarisMobReactionExtraAction.h"

FPolarisMobReactionExtraAction::FPolarisMobReactionExtraAction() {
    this->Type = EPolarisMobReactionExtraActionType::None;
    this->StartSeconds = 0.00f;
    this->AudioEvent = NULL;
    this->AnimationSequence = NULL;
    this->bLoopAnimation = false;
}

