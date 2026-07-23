#pragma once
#include "CoreMinimal.h"
#include "EPlayerNameType.generated.h"

UENUM()
enum class EPlayerNameType : uint8 {
    PlayerName,
    OnlineID,
    PolarisID,
};

