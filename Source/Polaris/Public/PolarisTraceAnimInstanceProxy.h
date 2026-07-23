#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "PolarisTraceAnimInstanceProxy.generated.h"

USTRUCT()
struct POLARIS_API FPolarisTraceAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FPolarisTraceAnimInstanceProxy();
};

