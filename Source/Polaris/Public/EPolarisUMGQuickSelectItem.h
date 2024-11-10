#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGQuickSelectItem.generated.h"

UENUM()
enum class EPolarisUMGQuickSelectItem : uint8 {
    Character,
    Customize,
    Costume,
    PlaySide,
    Stage,
    CPU,
    Ball,
    BallDamage,
    DECIDE,
};

