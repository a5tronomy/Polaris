#pragma once
#include "CoreMinimal.h"
#include "ECollisionLimitType.generated.h"

UENUM()
enum class ECollisionLimitType {
    None,
    Spherical,
    Capsule,
    Planar,
};

