#pragma once
#include "CoreMinimal.h"
#include "CUS_ItemIconEnum.generated.h"

UENUM()
enum class CUS_ItemIconEnum : uint8 {
    NewIcon,
    LockIcon,
    BuyIcon,
    EquipIcon,
    InGameStoreIcon,
    ColorEditIcon,
    SpEffectIcon,
};

