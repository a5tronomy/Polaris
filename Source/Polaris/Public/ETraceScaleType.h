#pragma once
#include "CoreMinimal.h"
#include "ETraceScaleType.generated.h"

UENUM()
enum class ETraceScaleType : uint8 {
    FromFirstSocket,
    FromSecondSocket,
    FromCentre,
};

