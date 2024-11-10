#include "PolarisBallAnimActor.h"
#include "PolarisBallSkeletalMeshComponent.h"

APolarisBallAnimActor::APolarisBallAnimActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMesh = CreateDefaultSubobject<UPolarisBallSkeletalMeshComponent>(TEXT("MainMesh"));
}



