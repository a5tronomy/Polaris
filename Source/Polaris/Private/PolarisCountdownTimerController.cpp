#include "PolarisCountdownTimerController.h"

UPolarisCountdownTimerController::UPolarisCountdownTimerController() {
    this->m_remainingTime = 0;
    this->m_worldContextObject = NULL;
}

void UPolarisCountdownTimerController::StopCountdown() {
}

void UPolarisCountdownTimerController::StartCountdown(int32 remainingSeconds) {
}

void UPolarisCountdownTimerController::OnTimerTick() {
}

UPolarisCountdownTimerController* UPolarisCountdownTimerController::CreateCountdownTimer(UObject* WorldContextObject, int32 initialSeconds, FTimerUpdateDelegate updateDelegate, FTimerFinishedDelegate finishedDelegate) {
    return NULL;
}


