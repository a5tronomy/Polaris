#pragma once
#include "CoreMinimal.h"
#include "EResult_BattleResult.generated.h"

UENUM()
enum class EResult_BattleResult : uint8 {
    Win,
    Lose,
    Draw,
};

