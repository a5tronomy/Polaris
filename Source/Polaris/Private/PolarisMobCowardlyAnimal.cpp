#include "PolarisMobCowardlyAnimal.h"
#include "Components/SkeletalMeshComponent.h"

APolarisMobCowardlyAnimal::APolarisMobCowardlyAnimal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->Type = 0;
    this->TargetDirSideAngleMin = 45.00f;
    this->TargetDirSideAngleMax = 135.00f;
    this->ChangeState = EPolarisMobCowardlyAnimalState::CowardlyAnimalState_None;
    this->LastTargetDir = EPolarisMobCowardlyAnimalTargetDir::CowardlyAnimalTargetDir_None;
    this->WaitStartPostion = 0.00f;
    this->WaitAnimation = NULL;
    this->RunAnimation = NULL;
    this->AwayAnimation = NULL;
}


void APolarisMobCowardlyAnimal::SetAwayRotation() {
}

int32 APolarisMobCowardlyAnimal::GetTargetPlayerID() const {
    return 0;
}

EPolarisMobCowardlyAnimalTargetDir APolarisMobCowardlyAnimal::GetTargetPlayerDir(int32 player_id) const {
    return EPolarisMobCowardlyAnimalTargetDir::CowardlyAnimalTargetDir_Front;
}

float APolarisMobCowardlyAnimal::GetTargetPlayerAngle(int32 player_id) const {
    return 0.0f;
}


