#pragma once
#include "CoreMinimal.h"
#include "EAtomWavePlayState.generated.h"

UENUM()
enum class EAtomWavePlayState : uint8 {
    Playing,
    Stopped,
    Paused,
    FadingIn,
    FadingOut,
    Count,
};

