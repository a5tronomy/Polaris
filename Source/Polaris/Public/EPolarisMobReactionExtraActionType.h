#pragma once
#include "CoreMinimal.h"
#include "EPolarisMobReactionExtraActionType.generated.h"

UENUM()
enum class EPolarisMobReactionExtraActionType : uint8 {
    None,
    ExtraAnimation,
    Sound,
    Max,
};

