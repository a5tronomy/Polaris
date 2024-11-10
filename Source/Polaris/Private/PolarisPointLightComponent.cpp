#include "PolarisPointLightComponent.h"

UPolarisPointLightComponent::UPolarisPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PolarisIntensityScale = 1.00f;
    this->PolarisIntensityScale2 = 1.00f;
}

float UPolarisPointLightComponent::GetPolarisScale() const {
    return 0.0f;
}

void UPolarisPointLightComponent::ApplyPolarisScale() {
}


