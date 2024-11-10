#pragma once
#include "CoreMinimal.h"
#include "EWwiseEventDestroyOptions.generated.h"

UENUM()
enum class EWwiseEventDestroyOptions : uint8 {
    StopEventOnDestroy,
    WaitForEventEnd,
};

