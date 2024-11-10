#pragma once
#include "CoreMinimal.h"
#include "ELobbyMachineType.generated.h"

UENUM()
enum class ELobbyMachineType : uint8 {
    Single,
    Lobbymatch,
    Other,
    Practice,
    PlayerMatch,
    ArcadeQuest,
    BallLobbymatch,
    BallPlayermatch,
    OnlinePractice,
};

