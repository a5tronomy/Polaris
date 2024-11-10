#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickWarZoneLightBeamState.generated.h"

UENUM()
enum class EStageGimmickWarZoneLightBeamState : uint8 {
    None,
    Loop,
    Break,
    Broken,
};

