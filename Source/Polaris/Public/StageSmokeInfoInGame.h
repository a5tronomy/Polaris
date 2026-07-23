#pragma once
#include "CoreMinimal.h"
#include "StageSmokeInfoInGame.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FStageSmokeInfoInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isParticleToReceiveDacal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAttachedCharacter;
    
    POLARIS_API FStageSmokeInfoInGame();
};

