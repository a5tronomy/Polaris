#pragma once
#include "CoreMinimal.h"
#include "EReOffsetProcessType.generated.h"

UENUM()
enum class EReOffsetProcessType {
    E_ReOffsetProcessType_ReOffset,
    E_ReOffsetProcessType_ReOffsetAbility,
    E_ReOffsetProcessType_ReOffset_Dependency,
    E_ReOffsetProcessType_ReOffsetAbility_Dependency,
};

