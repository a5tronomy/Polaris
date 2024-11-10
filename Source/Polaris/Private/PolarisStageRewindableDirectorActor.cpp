#include "PolarisStageRewindableDirectorActor.h"

APolarisStageRewindableDirectorActor::APolarisStageRewindableDirectorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInterrupted = false;
    this->bEnableOverrideRandomSeed = false;
    this->RelatedStageLightType = EStageLightType::Term;
}

void APolarisStageRewindableDirectorActor::RequestNewSequence(const FString& NewSequenceKey) {
}

void APolarisStageRewindableDirectorActor::OnSequenceEnd_Implementation() {
}

void APolarisStageRewindableDirectorActor::OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param) {
}

FString APolarisStageRewindableDirectorActor::GetRequestSequenceKey() const {
    return TEXT("");
}

EStageLightType APolarisStageRewindableDirectorActor::GetRelatedStageLightType() const {
    return EStageLightType::Default;
}

FString APolarisStageRewindableDirectorActor::GetCurrentSequenceKey() const {
    return TEXT("");
}

float APolarisStageRewindableDirectorActor::GetCurrentSequenceActorTime() const {
    return 0.0f;
}

void APolarisStageRewindableDirectorActor::ClearCurrentSequence() {
}


