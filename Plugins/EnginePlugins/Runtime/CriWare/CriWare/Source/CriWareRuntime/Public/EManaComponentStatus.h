#pragma once
#include "CoreMinimal.h"
#include "EManaComponentStatus.generated.h"

UENUM()
enum class EManaComponentStatus : uint8 {
    Stop,
    DecHdr,
    WaitPrep,
    Prep,
    Ready,
    Playing,
    PlayEnd,
    Error,
    StopProcessing,
};

