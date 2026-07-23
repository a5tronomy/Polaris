#pragma once
#include "CoreMinimal.h"
#include "PolarisSoundDataNiagara.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundDataNiagara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> SoundNiagara;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NoMultiPlayFrame;
    
    FPolarisSoundDataNiagara();
};

