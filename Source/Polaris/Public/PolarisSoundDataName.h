#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESoundTriggerPoint.h"
#include "PolarisSoundDataName.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundDataName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SoundName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NoMultiPlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESoundTriggerPoint TriggerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TriggerPointOffset;
    
    FPolarisSoundDataName();
};

