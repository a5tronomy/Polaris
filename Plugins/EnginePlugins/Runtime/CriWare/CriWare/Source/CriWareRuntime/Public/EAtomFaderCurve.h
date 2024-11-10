#pragma once
#include "CoreMinimal.h"
#include "EAtomFaderCurve.generated.h"

UENUM()
enum class EAtomFaderCurve {
    Linear,
    Logarithmic,
    SCurve,
    Sin,
    Count,
};

