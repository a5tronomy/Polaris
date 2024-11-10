#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickState.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisMeshDeformParam.h"
#include "PolarisStageGimmickAnimationSet.h"
#include "PolarisStageGimmickDestructibleMeshData.h"
#include "PolarisStageGimmicDeformMesh.generated.h"

class ASkeletalMeshActor;
class AStaticMeshActor;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageGimmicDeformMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AStaticMeshActor* DefaultMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ASkeletalMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AStaticMeshActor* BrokenMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCancelHitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageGimmickAnimationSet> HitAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 HitAnimationNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisStageGimmickAnimationSet BreakAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageGimmickDestructibleMeshData> DestructibleMeshs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPolarisMeshDeformParam> Param;
    
    UPROPERTY(BlueprintReadOnly)
    float DestructDelayRemainTime;
    
    UPROPERTY(BlueprintReadOnly)
    float DestructDelayTime;
    
    UPROPERTY(BlueprintReadOnly)
    EStageGimmickState DestructionProcess;
    
    UPROPERTY(EditAnywhere)
    TArray<UNiagaraSystem*> BreakEffectsOnMesh;
    
    UPROPERTY(BlueprintReadOnly)
    EStageImpulseStrengthType DestructionImpulseStrengthType;
    
    POLARIS_API FPolarisStageGimmicDeformMesh();
};

