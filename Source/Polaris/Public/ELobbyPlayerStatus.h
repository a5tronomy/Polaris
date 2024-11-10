#pragma once
#include "CoreMinimal.h"
#include "ELobbyPlayerStatus.generated.h"

UENUM()
enum class ELobbyPlayerStatus : uint8 {
    None,
    Menu,
    Chat,
    Watch,
    Away,
    Customize,
    GhostBattle,
    AnywhereBattle,
    Battle,
    PlayerMatch,
    OnlinePractice,
    LongWarp = 100,
    ShortWarp,
};

