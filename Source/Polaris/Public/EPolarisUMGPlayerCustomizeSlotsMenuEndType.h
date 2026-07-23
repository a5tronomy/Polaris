#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayerCustomizeSlotsMenuEndType.generated.h"

UENUM()
enum class EPolarisUMGPlayerCustomizeSlotsMenuEndType : uint8 {
    Cancelled,
    CopyBegin,
    SwapBegin,
    Delete,
};

