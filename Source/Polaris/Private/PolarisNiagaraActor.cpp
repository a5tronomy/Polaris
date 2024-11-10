#include "PolarisNiagaraActor.h"

APolarisNiagaraActor::APolarisNiagaraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsPlaySoundByBiginPlay = true;
    this->IsDelayNextTick = false;
}

void APolarisNiagaraActor::StopNiagaraSound() {
}

void APolarisNiagaraActor::PlayNiagaraSoundOtherActor(AActor* Actor) {
}

void APolarisNiagaraActor::PlayNiagaraSound() {
}


