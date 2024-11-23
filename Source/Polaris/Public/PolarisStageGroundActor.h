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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    int32 SetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    int32 FloorNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    int32 RelatedStageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    EStageLightType RelatedStageLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    bool IsNextStageSequence;
    
    UPROPERTY(BlueprintReadWrite, Category = "Polaris|StageGround")
    bool TKCollisionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    int32 WallDamageId;
    
    UPROPERTY(BlueprintReadWrite, Category = "Polaris|StageGround")
    int32 TotalDamage;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGround")
    bool IsDurable;
    
    UPROPERTY(BlueprintReadWrite, Category = "Polaris|StageGround")
    int32 DestructLevel;
    
    UPROPERTY(EditAnywhere, Instanced, Category = "Polaris|StageGround")
    TArray<UBoxComponent*> ExtraTKCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<FPolarisStageHitAnimationMesh> HitAnimationMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<FPolarisStageHitAnimationMesh> HitAnimationMeshesOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    FPolarisForceParam HitForceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<ARadialForceActor*> HitForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<APolarisRadialForceActor*> HitForcesPolaris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<UNiagaraSystem*> HitEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    int32 HitInterval;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<APolarisStageGimmickBaseActor*> HitSAnimationGimmicks;
    
    UPROPERTY(BlueprintAssignable, Category = "Polaris|StageGround")
    FPolarisGroundHitSignature OnHitEventDispather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<APolarisStageGimmickDeformControlActor*> StageGimmick_DeformControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    FPolarisForceParam BreakForceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<UNiagaraSystem*> DamageEffects;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> DamageEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<UNiagaraSystem*> FractureEffects;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> FractureEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    float DecalRegionW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisDecalActor* HitDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisDecalActor* HitDecal2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisDecalActor* HitDecal3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<APolarisDecalActor*> HitDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisDecalActor* BreakDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisDecalActor* BreakDecal2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisDecalActor* BreakDecal3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<APolarisDecalActor*> BreakDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisDecalActor* BreakDecal_Crack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<UNiagaraSystem*> BreakLevelEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<FPolarisStageNiagaraSystemArray> BreakLevelEffectsWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<FLevelEffectWorldActorParam> BreakLevelEffectWorldActor;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> BreakLevelEffectHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<APolarisGroundResetPoint*> GroundResetPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    APolarisGroundResetPoint* BalconyMidResetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    UAkAudioEvent* BreakSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<FPolarisStageLevelSequence> BreakLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    FPolarisStageLevelSequence GroundControllLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<FVector2D> GroundControllLevelSequenceFrameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    TArray<FPolarisStageChangePhysicalMaterial> ChangePhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGround")
    FPolarisStageLevelSequence FractureLevelSequence;
    
    APolarisStageGroundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void UpdateStageSequenceVisibility(int32 StageSequenceId, bool is_hidden, bool is_update_gimmick);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void SetVisible(bool Status);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void SetCollisionEnable(bool Status);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void OnStopBehavior();
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void OnReset();
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void OnInit();
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void OnHitS(const FVector& hit_pos, float Damage);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void onHit(const FVector& hit_pos, float Damage);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void OnFracture();
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void OnDamageBreakable(const FVector& hit_pos, float Damage, float total_damage);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void OnBreak(const FVector& hit_pos, float Damage, float total_damage);
    
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGround")
    bool IsWall() const;
    
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGround")
    bool IsBreakable() const;
    
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGround")
    int32 GetWallDamageId() const;
    
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGround")
    int32 GetMaxHitPoint() const;
    
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGround")
    int32 GetHitPoint() const;
    
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGround")
    int32 GetDestructLevel() const;
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|StageGround")
    void ChangeDestructLevel(int32 Level, EStageBreakType stageBreakType);
    
};

