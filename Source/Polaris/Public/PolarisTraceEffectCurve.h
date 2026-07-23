#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveBase.h"
#include "EPolarisTraceEffectCurveType.h"
#include "PolarisTraceEffectCurveData.h"
#include "PolarisTraceEffectCurve.generated.h"

UCLASS()
class POLARIS_API UPolarisTraceEffectCurve : public UCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPolarisTraceEffectCurveData> CurveData;
    
    UPolarisTraceEffectCurve();

    UFUNCTION(BlueprintPure)
    float GetParamValue(EPolarisTraceEffectCurveType CurveType, float InTime) const;
    
};

