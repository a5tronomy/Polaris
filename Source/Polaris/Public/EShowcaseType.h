#pragma once
#include "CoreMinimal.h"
#include "EShowcaseType.generated.h"

UENUM()
enum class EShowcaseType : uint8 {
    None,
    PickupLarge,
    PickupMiddle,
    PickupBanner,
    PickupBp,
};

