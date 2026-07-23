#pragma once
#include "CoreMinimal.h"
#include "RoundedNonuniformSpline.h"
#include "SmoothNonuniformSpline.generated.h"

USTRUCT()
struct POLARIS_API FSmoothNonuniformSpline : public FRoundedNonuniformSpline {
    GENERATED_BODY()
public:
    FSmoothNonuniformSpline();
};

