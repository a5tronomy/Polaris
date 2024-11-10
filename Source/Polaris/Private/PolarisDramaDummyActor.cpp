#include "PolarisDramaDummyActor.h"
#include "Components/SceneComponent.h"

APolarisDramaDummyActor::APolarisDramaDummyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PolarisDramaDummyActor_SceneComponent"));
}


