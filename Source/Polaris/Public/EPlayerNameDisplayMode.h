#pragma once
#include "CoreMinimal.h"
#include "EPlayerNameDisplayMode.generated.h"

UENUM()
enum class EPlayerNameDisplayMode : uint8 {
    PlayerName,
    PlatformId,
    PolarisId,
};

