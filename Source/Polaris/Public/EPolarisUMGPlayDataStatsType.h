#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayDataStatsType.generated.h"

UENUM()
enum class EPolarisUMGPlayDataStatsType : uint8 {
    Offense,
    Defense,
    Technique,
    Mental,
    Charm,
};

