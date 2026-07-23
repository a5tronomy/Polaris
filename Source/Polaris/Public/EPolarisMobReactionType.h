#pragma once
#include "CoreMinimal.h"
#include "EPolarisMobReactionType.generated.h"

UENUM()
enum class EPolarisMobReactionType : uint8 {
    None,
    Idle,
    Cheer,
    Terror,
    Max,
};

