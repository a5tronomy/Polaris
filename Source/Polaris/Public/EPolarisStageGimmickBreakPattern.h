#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageGimmickBreakPattern.generated.h"

UENUM()
enum class EPolarisStageGimmickBreakPattern : uint8 {
    Default,
    None,
    AnimationAndDecal,
    Decal,
    Animation,
    DeformAnimation,
};

