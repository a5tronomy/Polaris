#pragma once
#include "CoreMinimal.h"
#include "EAutoTest.generated.h"

UENUM()
enum class EAutoTest : uint8 {
    OFF,
    BATTLE_PROFILE,
    BATTLE_PRESTART,
    BATTLE_WIN,
    STORY,
    CHARACTER_EPISODE,
    ONLINE_RANKED_MATCH,
    ONLINE_PLAYER_MATCH,
    ONLINE_TOURNAMENT,
    ONLINE_LEADERBOARD,
    OFFLINE_ARCADE_BATTLE,
    OFFLINE_VERSUS_BATTLE,
    OFFLINE_PRACTICE,
    OFFLINE_TOURNAMENT,
    DEBUG_BATTLE,
    AGING_BATTLE,
    MAKE_DDC,
    SAMPLE,
    BATTLE_ROUNDSTART,
};

