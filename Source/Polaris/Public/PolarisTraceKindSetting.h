#pragma once
#include "CoreMinimal.h"
#include "EPolarisTraceKindId.h"
#include "PolarisTraceKindSetting.generated.h"

class UPolarisTraceKindDataAsset;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisTraceKindSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPolarisTraceKindId TraceKindId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPolarisTraceKindDataAsset* KindDataAsset;
    
    FPolarisTraceKindSetting();
};

