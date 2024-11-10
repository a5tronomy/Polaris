#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayDataSortType.generated.h"

UENUM()
enum class EPolarisUMGPlayDataSortType : uint8 {
    Rank,
    Wins,
    WinRate,
    UseRate,
};

