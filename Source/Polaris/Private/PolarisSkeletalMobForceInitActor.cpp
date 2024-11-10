#include "PolarisSkeletalMobForceInitActor.h"
#include "Components/SceneComponent.h"

APolarisSkeletalMobForceInitActor::APolarisSkeletalMobForceInitActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
}

void APolarisSkeletalMobForceInitActor::OnShown() {
}


