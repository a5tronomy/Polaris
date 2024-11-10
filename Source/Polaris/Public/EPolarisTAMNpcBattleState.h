#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMNpcBattleState.generated.h"

UENUM()
enum class EPolarisTAMNpcBattleState : uint8 {
    None,
    Start,
    Win,
    Lose,
    Draw,
    Menu,
};

