#pragma once
#include "CoreMinimal.h"
#include "ELobbyEmoteType.generated.h"

UENUM()
enum class ELobbyEmoteType : uint8 {
    None,
    Default,
    Paid,
    PartyEffect,
};

