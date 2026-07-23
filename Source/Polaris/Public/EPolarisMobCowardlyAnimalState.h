#pragma once
#include "CoreMinimal.h"
#include "EPolarisMobCowardlyAnimalState.generated.h"

UENUM()
enum class EPolarisMobCowardlyAnimalState : uint8 {
    CowardlyAnimalState_None,
    CowardlyAnimalState_Wait,
    CowardlyAnimalState_Escape,
};

