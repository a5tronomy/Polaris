#pragma once
#include "CoreMinimal.h"
#include "EWwiseGroupType.generated.h"

UENUM()
enum class EWwiseGroupType : uint8 {
    Switch,
    State,
    Unknown = 255,
};

