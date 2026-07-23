#include "PolarisStageAttackSphereComponent.h"

UPolarisStageAttackSphereComponent::UPolarisStageAttackSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->power = 1.00f;
    this->ImpulseStrength = 100.00f;
    this->ImpulseStrengthType = EStageImpulseStrengthType::W;
}


