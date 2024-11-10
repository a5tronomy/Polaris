#pragma once
#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "PolarisTraceEffectCurveData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceEffectCurveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRichCurve FloatCurve;
    
    UPROPERTY()
    FName CurveName;
    
    FPolarisTraceEffectCurveData();
};

