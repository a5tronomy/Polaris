#pragma once
#include "CoreMinimal.h"
#include "EStageImpulseStrengthType.generated.h"

UENUM()
enum class EStageImpulseStrengthType : uint8 {
    None,
    W,
    W_Mid,
    S,
    SS,
    Term,
};

