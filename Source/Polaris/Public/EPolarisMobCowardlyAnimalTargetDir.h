#pragma once
#include "CoreMinimal.h"
#include "EPolarisMobCowardlyAnimalTargetDir.generated.h"

UENUM()
enum class EPolarisMobCowardlyAnimalTargetDir : uint8 {
    CowardlyAnimalTargetDir_Front,
    CowardlyAnimalTargetDir_Right,
    CowardlyAnimalTargetDir_Left,
    CowardlyAnimalTargetDir_Back,
    CowardlyAnimalTargetDir_None,
};

