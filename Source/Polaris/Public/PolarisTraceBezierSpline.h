#pragma once
#include "CoreMinimal.h"
#include "PolarisTraceCatmullRomSpline.h"
#include "PolarisTraceBezierSpline.generated.h"

USTRUCT()
struct POLARIS_API FPolarisTraceBezierSpline : public FPolarisTraceCatmullRomSpline {
    GENERATED_BODY()
public:
    FPolarisTraceBezierSpline();
};

