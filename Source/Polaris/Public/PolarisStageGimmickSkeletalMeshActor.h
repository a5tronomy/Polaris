#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageGimmickBreakPattern.h"
#include "PolarisMeshDeformParamArray.h"
#include "PolarisStageGimmickActor.h"
#include "PolarisStageGimmickReaction.h"
#include "PolarisStageGimmickSkeletalMeshActor.generated.h"

class APolarisMobAnimal;
class UAnimationAsset;
class UDecalComponent;
class UFXSystemComponent;
class ULightComponent;
class UNiagaraComponent;
class UPolarisColorBlendComponent;
class UPolarisMeshDeformComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS()
class POLARIS_API APolarisStageGimmickSkeletalMeshActor : public APolarisStageGimmickActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    UStaticMeshComponent* DefaultMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    UStaticMeshComponent* BrokenMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<ULightComponent*> LightComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<UFXSystemComponent*> FXSystemComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<UPolarisColorBlendComponent*> PolarisColorBlendComponents;
    
    UPROPERTY(EditAnywhere, Instanced, Category = "StageGimmickSkeletalMesh")
    UPolarisMeshDeformComponent* PolarisMeshDeformComponent;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<FPolarisMeshDeformParamArray> DeformParams;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<UStaticMeshComponent*> DecalMeshs;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* DecalMesh;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* DecalMesh_Broken;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<UDecalComponent*> Decals;
    
    UPROPERTY(Instanced)
    UDecalComponent* decal;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<FPolarisStageGimmickReaction> ReactionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickSkeletalMesh")
    bool IsDeform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickSkeletalMesh")
    bool IsAlwaysHitReaction;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmickSkeletalMesh")
    int32 HitInterval;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmickSkeletalMesh")
    bool NoPriorityCancel;
    
    UPROPERTY(BlueprintReadOnly, Category = "StageGimmickSkeletalMesh")
    EPolarisStageGimmickBreakPattern BreakPattern;
    
    UPROPERTY(BlueprintReadOnly, Category = "StageGimmickSkeletalMesh")
    EPolarisStageGimmickBreakPattern BreakPattern2nd;
    
    UPROPERTY(BlueprintReadOnly, Category = "StageGimmickSkeletalMesh")
    bool IsBreakPattern2nd;
    
    UPROPERTY(BlueprintReadOnly, Category = "StageGimmickSkeletalMesh")
    TArray<UAnimationAsset*> AnimationAsset2nd;
    
    UPROPERTY(BlueprintReadWrite, Category = "StageGimmickSkeletalMesh")
    int32 BreakLevel;
    
    UPROPERTY(VisibleInstanceOnly, Category = "StageGimmickSkeletalMesh")
    int32 VisibleSkeletalMeshFlag;
    
    UPROPERTY(VisibleInstanceOnly, Category = "StageGimmickSkeletalMesh")
    int32 VisibleLightFlag;
    
    UPROPERTY(VisibleInstanceOnly, Category = "StageGimmickSkeletalMesh")
    int32 VisibleEffectFlag;
    
    UPROPERTY(BlueprintReadOnly, Category = "StageGimmickSkeletalMesh")
    EPolarisStageGimmickBreakPattern CurrentBreakPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<TSoftObjectPtr<APolarisMobAnimal>> MobAnimalSlot;
    
    UPROPERTY(Export, VisibleAnywhere, Category = "StageGimmickSkeletalMesh")
    TArray<TWeakObjectPtr<UNiagaraComponent>> ReactHitEffectInstances;
    
    UPROPERTY()
    int32 LastImpulseStrengthType;
    
    APolarisStageGimmickSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

