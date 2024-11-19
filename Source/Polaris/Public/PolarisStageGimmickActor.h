#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickHitEffect.h"
#include "PolarisStageSpawnEffect.h"
#include "Templates/SubclassOf.h"
#include "PolarisStageGimmickActor.generated.h"

class AActor;
class AController;
class APolarisDestructibleNiagaraActor;
class APolarisRadialForceActor;
class APolarisStagePhysicsActor;
class APolarisStageWallActor;
class ARadialForceActor;
class UAkAudioEvent;
class UDamageType;
class UMeshComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPolarisStageAttackSphereComponent;
class UPrimitiveComponent;
class UStaticMesh;

UCLASS(Abstract)
class POLARIS_API APolarisStageGimmickActor : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    int32 IsTouchBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsPlayerDamageBrakeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsPlayerDownBrakeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsHitBreakFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsPhysicsAutoAttackFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsStartPhysicsMeshFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    FVector2D PhysicsAutoAttackCheckVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float DamageImpluseStrengthMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float TouchImpluseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    ARadialForceActor* DestrictibleForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    APolarisRadialForceActor* DestrictibleForcePolaris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    TArray<AActor*> HitInvisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float HitInvisibleImpuleseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    UNiagaraSystem* DestrictibleNiagaraRBDAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    UStaticMesh* DestrictibleStaticMeshAssset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool DestrictibleEnableHardSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsDestrictibleWallBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    FVector DestrictibleWallBarrierFacadeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    FVector DestructibleForceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float DestructibleForceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float DestructibleForceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsDispDestructibleForce;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Category = "StageGimmick")
    TArray<UPolarisStageAttackSphereComponent*> AttackArray;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Category = "StageGimmick")
    UPrimitiveComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    APolarisStageWallActor* BattleSpaceWallActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsVanishWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float VanishingStartSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float VanishingEndSecond;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    bool IsVanishingDisableBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    bool IsNoFadeoutDestructible;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    TArray<FPolarisStageGimmickHitEffect> ReactEffectArray;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> ReactEffectHandles;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    TArray<UNiagaraSystem*> HitEffects;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectHandles;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    TArray<UNiagaraSystem*> HitEffectsOnMesh;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectOnMeshHandles;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    TArray<FPolarisStageSpawnEffect> HitEffectsOnMeshOffset;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectOnMeshOffsetHandles;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    UAkAudioEvent* HitSound;
    
    UPROPERTY()
    TArray<uint32> HitSoundPlayHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    UAkAudioEvent* ImpacterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float ImpacterExtraMassValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float ImpacterExtraVelocityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float ImpacterForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float ImpacterMassThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    int32 ImpacterNoMultiPlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageGimmick")
    float RevaivalWaitSecond;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    float DeformWeightDamageMul;
    
    UPROPERTY(VisibleAnywhere, Category = "StageGimmick")
    TArray<APolarisDestructibleNiagaraActor*> PolarisDestructibleNiagaraActors;
    
    UPROPERTY(EditAnywhere, Category = "StageGimmick")
    TSubclassOf<APolarisDestructibleNiagaraActor> DestructibleNiagaraActorClass;
    
    UPROPERTY(VisibleAnywhere, Category = "StageGimmick")
    TArray<APolarisStagePhysicsActor*> PolarisDestructibleStaticMeshActors;
    
    APolarisStageGimmickActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWallHitEventForBattleSpace(FVector HitLocation, float Damage);
    
    UFUNCTION()
    void OnTakeRadialDamageEvent(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION()
    void OnTakePointDamageEvent(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION()
    void OnAttackHitEvent(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure, Category = "StageGimmick")
    UMeshComponent* GetMeshComponent() const;
    
private:
    UFUNCTION()
    void DoSpawnEffectTest();
    
};

