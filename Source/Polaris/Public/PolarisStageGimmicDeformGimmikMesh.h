#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickState.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisStageGimmicDeformGimmikMesh.generated.h"

class APolarisStageGimmickSkeletalMeshActor;
class ARadialForceActor;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageGimmicDeformGimmikMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    APolarisStageGimmickSkeletalMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadOnly)
    float DestructDelayRemainTime;
    
    UPROPERTY(BlueprintReadOnly)
    float DestructDelayTime;
    
    UPROPERTY(BlueprintReadOnly)
    EStageGimmickState DestructionProcess;
    
    UPROPERTY(EditAnywhere)
    TArray<UNiagaraSystem*> BreakEffectsOnMesh;
    
    UPROPERTY(EditAnywhere)
    bool IsTakeOnDamageBreakable;
    
    UPROPERTY(BlueprintReadOnly)
    EStageImpulseStrengthType DestructionImpulseStrengthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ARadialForceActor* DestructionRadialForceActor;
    
    POLARIS_API FPolarisStageGimmicDeformGimmikMesh();
};

