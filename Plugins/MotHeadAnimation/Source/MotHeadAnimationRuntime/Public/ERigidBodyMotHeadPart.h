#pragma once
#include "CoreMinimal.h"
#include "ERigidBodyMotHeadPart.generated.h"

UENUM()
enum class ERigidBodyMotHeadPart : uint8 {
    NONE,
    UPPER,
    LOWER,
    HAIR,
    UPPER_EXTRA,
};

