#pragma once
#include "CoreMinimal.h"
#include "EGhostOrderType.generated.h"

UENUM()
enum class EGhostOrderType : uint8 {
    ORDER_THROW,
    ORDER_LOW,
    ORDER_MID,
    ORDER_POWERCRUSH,
    ORDER_HEAT,
    ORDER_RAGE,
    ORDER_NONE,
};

