#pragma once
#include "CoreMinimal.h"
#include "ELobbyArea.generated.h"

UENUM()
enum class ELobbyArea : uint8 {
    None,
    Entrance,
    Battle,
    Customize,
    DoJo,
    MiniGame,
};

