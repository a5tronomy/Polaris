#pragma once
#include "CoreMinimal.h"
#include "EBlackPenMissionType.generated.h"

UENUM()
enum class EBlackPenMissionType : uint8 {
    Mission_None,
    Mission_Login,
    Mission_HighestRank,
    Mission_Mission,
    Mission_Battle,
    Mission_BattleWin,
    Mission_RoundWin,
    Mission_Damage,
    Mission_Lobby,
    Mission_Replay,
    Mission_Ghost,
};

