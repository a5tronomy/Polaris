#pragma once
#include "CoreMinimal.h"
#include "EEffectPositionId.h"
#include "PhysicsMaterialStepInfo.h"
#include "PhysicsMaterialStepParticleInfo.h"
#include "PhysicsMaterialStep.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsMaterialStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EEffectPositionId, FPhysicsMaterialStepInfo> PhysicsMaterialStepInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPhysicsMaterialStepParticleInfo> ParticleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaterialType;
    
    POLARIS_API FPhysicsMaterialStep();
};

