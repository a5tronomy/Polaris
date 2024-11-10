#pragma once
#include "CoreMinimal.h"
#include "ESupportUEAnimationMode.generated.h"

UENUM()
enum class ESupportUEAnimationMode : uint8 {
    None,
    Hybrid,
    FullBake,
    Hybrid_Dynamic,
};

