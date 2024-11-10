#pragma once
#include "CoreMinimal.h"
#include "ECwClothBoneScalingMode.generated.h"

UENUM()
enum class ECwClothBoneScalingMode : uint8 {
    Disabled,
    UpdateEveryFrame,
    UseLastUpdatedFrame,
};

