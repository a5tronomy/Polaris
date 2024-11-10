#pragma once
#include "CoreMinimal.h"
#include "PolarisSoundDataStoryBgmCtrl.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundDataStoryBgmCtrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundDataStoryBgmCtrlSkip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* SoundDataStoryBgmCtrlRetry;
    
    FPolarisSoundDataStoryBgmCtrl();
};

