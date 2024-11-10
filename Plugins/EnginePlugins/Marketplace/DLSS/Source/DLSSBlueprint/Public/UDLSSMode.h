#pragma once
#include "CoreMinimal.h"
#include "UDLSSMode.generated.h"

UENUM()
enum class UDLSSMode : uint8 {
    Off,
    Auto,
    DLAA,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

