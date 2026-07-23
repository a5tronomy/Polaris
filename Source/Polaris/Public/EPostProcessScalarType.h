#pragma once
#include "CoreMinimal.h"
#include "EPostProcessScalarType.generated.h"

UENUM()
enum class EPostProcessScalarType : uint8 {
    Saturation,
    Contrast,
    Max,
};

