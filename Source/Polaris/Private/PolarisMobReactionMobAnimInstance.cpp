#include "PolarisMobReactionMobAnimInstance.h"

UPolarisMobReactionMobAnimInstance::UPolarisMobReactionMobAnimInstance() {
    this->ReactionType = EPolarisMobReactionType::Idle;
    this->RequestReactionType = EPolarisMobReactionType::None;
}

void UPolarisMobReactionMobAnimInstance::UpdateContext(float DeltaSeconds) {
}

FVector UPolarisMobReactionMobAnimInstance::GetLookAtTarget() const {
    return FVector{};
}

bool UPolarisMobReactionMobAnimInstance::GetContext(EPolarisMobReactionType _ReactionType, bool GetIdleIfFail, FPolarisMobReactionContext& OutContext) const {
    return false;
}

void UPolarisMobReactionMobAnimInstance::GenerateNextIndex(EPolarisMobReactionType _ReactionType) {
}

void UPolarisMobReactionMobAnimInstance::CalculateLookAtTarget() {
}

void UPolarisMobReactionMobAnimInstance::AdvanceContextTick(EPolarisMobReactionType _ReactionType, float DeltaSeconds, bool AffectPlayRate) {
}


