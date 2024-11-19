#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "EStageBreakType.h"
#include "EStageGimmickState.h"
#include "EStageLightType.h"
#include "LevelEffectWorldActorParam.h"
#include "PolarisForceParam.h"
#include "PolarisGroundHitSignatureDelegate.h"
#include "PolarisStageChangePhysicalMaterial.h"
#include "PolarisStageHitAnimationMesh.h"
#include "PolarisStageLevelSequence.h"
#include "PolarisStageNiagaraSystemArray.h"
#include "PolarisStageGroundActor.generated.h"

class APolarisDecalActor;
class APolarisGroundResetPoint;
class APolarisRadialForceActor;
class APolarisStageGimmickBaseActor;
class APolarisStageGimmickDeformControlActor;
class ARadialForceActor;
class UAkAudioEvent;
class UBoxComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class USphereComponent;

UCLASS(Abstract)
class POLARIS_API APolarisStageGroundActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USphereComponent* HitCollision;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageLightType RelatedStageLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsNextStageSequence;
    
    UPROPERTY(BlueprintReadWrite)
    bool TKCollisionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WallDamageId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 TotalDamage;
    
    UPROPERTY(EditAnywhere)
    bool IsDurable;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DestructLevel;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UBoxComponent*> ExtraTKCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageHitAnimationMesh> HitAnimationMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageHitAnimationMesh> HitAnimationMeshesOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisForceParam HitForceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ARadialForceActor*> HitForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisRadialForceActor*> HitForcesPolaris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UNiagaraSystem*> HitEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HitInterval;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisStageGimmickBaseActor*> HitSAnimationGimmicks;
    
    UPROPERTY(BlueprintAssignable)
    FPolarisGroundHitSignature OnHitEventDispather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisStageGimmickDeformControlActor*> StageGimmick_DeformControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisForceParam BreakForceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UNiagaraSystem*> DamageEffects;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> DamageEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UNiagaraSystem*> FractureEffects;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> FractureEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecalRegionW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisDecalActor* HitDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisDecalActor* HitDecal2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisDecalActor* HitDecal3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisDecalActor*> HitDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisDecalActor* BreakDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisDecalActor* BreakDecal2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisDecalActor* BreakDecal3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisDecalActor*> BreakDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisDecalActor* BreakDecal_Crack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UNiagaraSystem*> BreakLevelEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageNiagaraSystemArray> BreakLevelEffectsWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLevelEffectWorldActorParam> BreakLevelEffectWorldActor;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> BreakLevelEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<APolarisGroundResetPoint*> GroundResetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisGroundResetPoint* BalconyMidResetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* BreakSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageLevelSequence> BreakLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisStageLevelSequence GroundControllLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector2D> GroundControllLevelSequenceFrameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageChangePhysicalMaterial> ChangePhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPolarisStageLevelSequence FractureLevelSequence;
    
    APolarisStageGroundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateStageSequenceVisibility(int32 StageSequenceId, bool is_hidden, bool is_update_gimmick);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool Status);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEnable(bool Status);
    
    UFUNCTION(BlueprintCallable)
    void OnStopBehavior();
    
    UFUNCTION(BlueprintCallable)
    void OnReset();
    
    UFUNCTION(BlueprintCallable)
    void OnInit();
    
    UFUNCTION(BlueprintCallable)
    void OnHitS(const FVector& hit_pos, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void onHit(const FVector& hit_pos, float Damage);
    
    UFUNCTION(BlueprintCallable)
    void OnFracture();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageBreakable(const FVector& hit_pos, float Damage, float total_damage);
    
    UFUNCTION(BlueprintCallable)
    void OnBreak(const FVector& hit_pos, float Damage, float total_damage);
    
    UFUNCTION(BlueprintPure)
    bool IsWall() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBreakable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWallDamageId() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxHitPoint() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHitPoint() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDestructLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeDestructLevel(int32 Level, EStageBreakType stageBreakType);
    
};

