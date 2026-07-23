#include "ItemGhostActor.h"

AItemGhostActor::AItemGhostActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsBattleMode = false;
}


void AItemGhostActor::OnZoneBegin(FEventOnZoneBeginParam Param) {
}



void AItemGhostActor::OnTimeUp(FEventOnTimeUpParam Param) {
}

void AItemGhostActor::OnThrowDamage(FEventOnThrowDamageParam Param) {
}

void AItemGhostActor::OnStageBreakEvent(FEventOnStageBreakEventParam Param) {
}






void AItemGhostActor::onRageStateChanged(FEventOnRageStateChangedParam Param) {
}


void AItemGhostActor::onRageArtsEnd(FEventOnRageArtsEndParam Param) {
}

void AItemGhostActor::onRageArtsBegin(FEventOnRageArtsBeginParam Param) {
}



void AItemGhostActor::OnPreInitBattle() {
}








void AItemGhostActor::OnKO(FEventOnKOParam Param) {
}

void AItemGhostActor::OnInitBattle(FEventOnInitBattleParam Param) {
}

void AItemGhostActor::onHit(FEventOnHitParam Param) {
}



void AItemGhostActor::OnDoubleKO(FEventOnDoubleKOParam Param) {
}




void AItemGhostActor::onCriticalHit(FEventOnCriticalHitParam Param) {
}





