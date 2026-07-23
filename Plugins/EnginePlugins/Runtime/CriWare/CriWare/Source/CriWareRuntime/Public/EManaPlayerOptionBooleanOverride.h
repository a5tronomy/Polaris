#pragma once
#include "CoreMinimal.h"
#include "EManaPlayerOptionBooleanOverride.generated.h"

UENUM()
enum class EManaPlayerOptionBooleanOverride : uint8 {
    UseManaPlayerSetting,
    Enabled,
    Disabled,
};

