#pragma once
#include "CoreMinimal.h"
#include "EManaPlaybackTimer.generated.h"

UENUM()
enum class EManaPlaybackTimer : uint8 {
    Default,
    RealTime,
    FrameTime,
    Manual,
};

