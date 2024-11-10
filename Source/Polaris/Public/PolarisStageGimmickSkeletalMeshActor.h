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
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* DefaultMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UStaticMeshComponent* BrokenMeshComponent;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<ULightComponent*> LightComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UFXSystemComponent*> FXSystemComponents;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UPolarisColorBlendComponent*> PolarisColorBlendComponents;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPolarisMeshDeformComponent* PolarisMeshDeformComponent;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisMeshDeformParamArray> DeformParams;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UStaticMeshComponent*> DecalMeshs;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* DecalMesh;
    
    UPROPERTY(Instanced)
    UStaticMeshComponent* DecalMesh_Broken;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UDecalComponent*> Decals;
    
    UPROPERTY(Instanced)
    UDecalComponent* decal;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageGimmickReaction> ReactionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDeform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAlwaysHitReaction;
    
    UPROPERTY(EditAnywhere)
    int32 HitInterval;
    
    UPROPERTY(EditAnywhere)
    bool NoPriorityCancel;
    
    UPROPERTY(BlueprintReadOnly)
    EPolarisStageGimmickBreakPattern BreakPattern;
    
    UPROPERTY(BlueprintReadOnly)
    EPolarisStageGimmickBreakPattern BreakPattern2nd;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsBreakPattern2nd;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UAnimationAsset*> AnimationAsset2nd;
    
    UPROPERTY(BlueprintReadWrite)
    int32 BreakLevel;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 VisibleSkeletalMeshFlag;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 VisibleLightFlag;
    
    UPROPERTY(VisibleInstanceOnly)
    int32 VisibleEffectFlag;
    
    UPROPERTY(BlueprintReadOnly)
    EPolarisStageGimmickBreakPattern CurrentBreakPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<APolarisMobAnimal>> MobAnimalSlot;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<TWeakObjectPtr<UNiagaraComponent>> ReactHitEffectInstances;
    
    UPROPERTY()
    int32 LastImpulseStrengthType;
    
    APolarisStageGimmickSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

