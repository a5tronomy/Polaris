#include "PolarisStageGimmickST21Elevator.h"

APolarisStageGimmickST21Elevator::APolarisStageGimmickST21Elevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElevatorState = EStageGimmickST21ElevatorState::None;
    this->CurrentFrame = 0.00f;
}

void APolarisStageGimmickST21Elevator::OnInitBattle_Implementation(FEventOnInitBattleParam Param) {
}

void APolarisStageGimmickST21Elevator::OnGeneralBattleEvent_Implementation(FEventOnGeneralBattleEventParam Param) {
}

void APolarisStageGimmickST21Elevator::OnChangeStageLight_Implementation(FEventOnChangeStageLightParam Param) {
}


