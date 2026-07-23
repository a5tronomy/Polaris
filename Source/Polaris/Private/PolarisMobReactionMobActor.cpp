#include "PolarisMobReactionMobActor.h"
#include "Components/SkeletalMeshComponent.h"

APolarisMobReactionMobActor::APolarisMobReactionMobActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MainMesh"));
    this->MobMesh = NULL;
    this->CheerRange = 800.00f;
    this->TerrorRange = 800.00f;
    this->bOverrideRandomSeed = false;
    this->MobMeshComponent = (USkeletalMeshComponent*)RootComponent;
}

void APolarisMobReactionMobActor::RequestReaction(EPolarisMobReactionType _RequestReaction, float Delay) {
}

void APolarisMobReactionMobActor::OnWallHit(FEventOnWallHitParam Param) {
}

void APolarisMobReactionMobActor::OnRadialForce(FEventOnRadialForceParam Param) {
}

void APolarisMobReactionMobActor::OnPreInitBattle() {
}

void APolarisMobReactionMobActor::OnMotHeadStart() {
}

void APolarisMobReactionMobActor::OnMotHeadEnd() {
}

void APolarisMobReactionMobActor::OnInitBattle(FEventOnInitBattleParam Param) {
}

void APolarisMobReactionMobActor::onCriticalHit(FEventOnCriticalHitParam Param) {
}

void APolarisMobReactionMobActor::ForceReactionNative_Implementation(EPolarisMobReactionType Type) {
}


