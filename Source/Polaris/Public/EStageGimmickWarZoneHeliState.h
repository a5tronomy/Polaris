#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickWarZoneHeliState.generated.h"

UENUM()
enum class EStageGimmickWarZoneHeliState : uint8 {
    None,
    Start,
    Loop,
    Break,
    Broken,
};

