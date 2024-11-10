#pragma once
#include "CoreMinimal.h"
#include "EPolarisLightDirection.generated.h"

UENUM()
enum class EPolarisLightDirection : uint8 {
    RightBack,
    LeftBack,
    Front,
    Any,
};

