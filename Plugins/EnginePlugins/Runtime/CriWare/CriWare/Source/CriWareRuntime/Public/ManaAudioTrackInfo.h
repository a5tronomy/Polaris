#pragma once
#include "CoreMinimal.h"
#include "EManaSoundType.h"
#include "ManaAudioTrackInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FManaAudioTrackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumChannels;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SamplingRate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalSamples;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsAmbisonics;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EManaSoundType Type;
    
    FManaAudioTrackInfo();
};

