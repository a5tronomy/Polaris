#pragma once
#include "CoreMinimal.h"
#include "EMobVATMovePatern.generated.h"

UENUM()
enum class EMobVATMovePatern : uint8 {
    Idle,
    Walk,
    Back,
    Dying,
    Warp,
    DitherOff,
    DitherOn,
    IdleVATStop,
    DitherStay,
};

