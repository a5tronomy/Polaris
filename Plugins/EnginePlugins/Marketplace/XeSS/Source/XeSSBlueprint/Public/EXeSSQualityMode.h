#pragma once
#include "CoreMinimal.h"
#include "EXeSSQualityMode.generated.h"

UENUM()
enum class EXeSSQualityMode : uint8 {
    Off,
    Performance,
    Balanced,
    Quality,
    UltraQuality,
};

