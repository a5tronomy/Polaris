#pragma once
#include "CoreMinimal.h"
#include "PhysicsMaterialStepParticleInfoInGame.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPhysicsMaterialStepParticleInfoInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAttachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAsyncTrace;
    
    POLARIS_API FPhysicsMaterialStepParticleInfoInGame();
};

