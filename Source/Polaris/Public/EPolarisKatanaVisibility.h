#pragma once
#include "CoreMinimal.h"
#include "EPolarisKatanaVisibility.generated.h"

UENUM()
enum class EPolarisKatanaVisibility : uint8 {
    VisibleAll,
    VisibleWeapon,
    HideWeapon,
    NoSetting,
};

