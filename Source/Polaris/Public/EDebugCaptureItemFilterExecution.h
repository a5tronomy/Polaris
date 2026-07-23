#pragma once
#include "CoreMinimal.h"
#include "EDebugCaptureItemFilterExecution.generated.h"

UENUM()
enum class EDebugCaptureItemFilterExecution : uint8 {
    None,
    Remove,
    Replace,
};

