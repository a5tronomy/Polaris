#include "PolarisSpotLightComponent.h"

UPolarisSpotLightComponent::UPolarisSpotLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PolarisIntensityScale = 1.00f;
    this->PolarisIntensityScale2 = 1.00f;
}

float UPolarisSpotLightComponent::GetPolarisScale() const {
    return 0.0f;
}

void UPolarisSpotLightComponent::ApplyPolarisScale() {
}


