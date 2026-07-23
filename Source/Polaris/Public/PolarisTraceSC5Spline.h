#pragma once
#include "CoreMinimal.h"
#include "PolarisTraceBSpline.h"
#include "PolarisTraceSC5Spline.generated.h"

USTRUCT()
struct POLARIS_API FPolarisTraceSC5Spline : public FPolarisTraceBSpline {
    GENERATED_BODY()
public:
    FPolarisTraceSC5Spline();
};

