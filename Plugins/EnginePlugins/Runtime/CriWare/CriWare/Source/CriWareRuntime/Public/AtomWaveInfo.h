#pragma once
#include "CoreMinimal.h"
#include "EAtomFormat.h"
#include "AtomWaveInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomWaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EAtomFormat Format;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SamplingRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumChannels;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumSamples;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bIsStreamed: 1;
    
    FAtomWaveInfo();
};

