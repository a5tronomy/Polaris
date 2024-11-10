#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESoundTriggerPoint.h"
#include "PolarisSoundData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SoundID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NoMultiPlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESoundTriggerPoint TriggerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TriggerPointOffset;
    
    FPolarisSoundData();
};

