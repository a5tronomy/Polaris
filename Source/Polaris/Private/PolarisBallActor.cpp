#include "PolarisBallActor.h"
#include "PolarisBallMeshComponent.h"

APolarisBallActor::APolarisBallActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMesh = CreateDefaultSubobject<UPolarisBallMeshComponent>(TEXT("MainMesh"));
}


