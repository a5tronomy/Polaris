#pragma once
#include "CoreMinimal.h"
#include "EDebugCaptureItemFilterExecutionTiming.generated.h"

UENUM()
enum class EDebugCaptureItemFilterExecutionTiming {
    None,
    Initial,
    CategoryChanged,
    EveryEquip = 4,
};

