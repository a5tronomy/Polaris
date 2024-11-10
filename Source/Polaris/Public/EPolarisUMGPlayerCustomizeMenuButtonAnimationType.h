#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayerCustomizeMenuButtonAnimationType.generated.h"

UENUM()
enum class EPolarisUMGPlayerCustomizeMenuButtonAnimationType {
    Click,
    Hover,
    Normal,
    In,
    SelectIn,
    BackSelectIn,
    NoSelectIn,
    BackNoSelectIn,
};

