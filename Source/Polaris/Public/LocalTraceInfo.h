#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEffectPositionId.h"
#include "PhysicsMaterialStepInfoInGame.h"
#include "PhysicsMaterialStepParticleInfoInGame.h"
#include "LocalTraceInfo.generated.h"

USTRUCT()
struct FLocalTraceInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 local_priority;
    
    UPROPERTY()
    int32 local_surface_type;
    
    UPROPERTY()
    int32 local_material_type;
    
    UPROPERTY()
    FVector local_position;
    
    UPROPERTY()
    TMap<EEffectPositionId, FPhysicsMaterialStepInfoInGame> PMSI_Map;
    
    UPROPERTY()
    TArray<FPhysicsMaterialStepParticleInfoInGame> particles_info;
    
    POLARIS_API FLocalTraceInfo();
};

