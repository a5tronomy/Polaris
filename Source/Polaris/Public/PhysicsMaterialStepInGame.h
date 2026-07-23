#pragma once
#include "CoreMinimal.h"
#include "EEffectPositionId.h"
#include "PhysicsMaterialStepInfoInGame.h"
#include "PhysicsMaterialStepParticleInfoInGame.h"
#include "PhysicsMaterialStepInGame.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsMaterialStepInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EEffectPositionId, FPhysicsMaterialStepInfoInGame> PhysicsMaterialStepInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPhysicsMaterialStepParticleInfoInGame> ParticleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialType;
    
    POLARIS_API FPhysicsMaterialStepInGame();
};

