#include "PolarisStageManager.h"
#include "Components/SceneComponent.h"
#include "PolarisRadialForceComponent.h"

APolarisStageManager::APolarisStageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Force = CreateDefaultSubobject<UPolarisRadialForceComponent>(TEXT("Force"));
    this->MPCEnvFlagment = NULL;
    this->Force->SetupAttachment(RootComponent);
}


void APolarisStageManager::OnFloorHit(FEventOnFloorHitParam Param) {
}



