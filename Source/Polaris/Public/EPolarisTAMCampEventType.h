#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMCampEventType.generated.h"

UENUM()
enum class EPolarisTAMCampEventType {
    None,
    FirstTime,
    SpotClick,
    SpotBoss,
    SpotClear,
};

