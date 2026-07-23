#pragma once
#include "CoreMinimal.h"
#include "EGhostOrderState.generated.h"

UENUM()
enum class EGhostOrderState : uint8 {
    NotReady,
    Ready,
    Ordered,
    Reserved,
    Executing,
    CoolDown,
    Used,
    Disabled,
    None,
};

