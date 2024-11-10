#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickState.generated.h"

UENUM()
enum class EStageGimmickState : uint8 {
    Init,
    Main,
    Damage,
    Break,
    VanishWait,
    VanishStart,
    Vanish,
    Revival,
    End,
};

