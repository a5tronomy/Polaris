#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMTalkType.generated.h"

UENUM()
enum class EPolarisTAMTalkType : uint8 {
    Normal,
    BattleStart,
    Win,
    Lose,
};

