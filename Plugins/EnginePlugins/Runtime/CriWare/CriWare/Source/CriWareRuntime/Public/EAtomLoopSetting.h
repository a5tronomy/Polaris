#pragma once
#include "CoreMinimal.h"
#include "EAtomLoopSetting.generated.h"

UENUM()
enum class EAtomLoopSetting : uint8 {
    Inherited,
    Loop,
    OneShot,
};

