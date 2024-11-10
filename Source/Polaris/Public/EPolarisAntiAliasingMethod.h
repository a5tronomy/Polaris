#pragma once
#include "CoreMinimal.h"
#include "EPolarisAntiAliasingMethod.generated.h"

UENUM()
enum class EPolarisAntiAliasingMethod : uint8 {
    FXAA,
    TAA,
    TSR,
    FSR_2,
    DLSS,
    XeSS,
    None,
};

