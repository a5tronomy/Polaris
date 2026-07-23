#pragma once
#include "CoreMinimal.h"
#include "StageSmokeInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FStageSmokeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isParticleToReceiveDacal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAttachedCharacter;
    
    POLARIS_API FStageSmokeInfo();
};

