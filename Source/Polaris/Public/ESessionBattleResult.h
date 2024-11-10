#pragma once
#include "CoreMinimal.h"
#include "ESessionBattleResult.generated.h"

UENUM()
enum class ESessionBattleResult : uint8 {
    WIN,
    LOSE,
    DRAW,
    INVALID,
};

