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
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IsTouchBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlayerDamageBrakeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlayerDownBrakeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHitBreakFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPhysicsAutoAttackFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsStartPhysicsMeshFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PhysicsAutoAttackCheckVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageImpluseStrengthMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TouchImpluseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ARadialForceActor* DestrictibleForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisRadialForceActor* DestrictibleForcePolaris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> HitInvisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HitInvisibleImpuleseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* DestrictibleNiagaraRBDAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* DestrictibleStaticMeshAssset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DestrictibleEnableHardSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDestrictibleWallBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DestrictibleWallBarrierFacadeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DestructibleForceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleForceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleForceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispDestructibleForce;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UPolarisStageAttackSphereComponent*> AttackArray;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPrimitiveComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisStageWallActor* BattleSpaceWallActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVanishWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VanishingStartSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VanishingEndSecond;
    
    UPROPERTY(EditAnywhere)
    bool IsVanishingDisableBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsNoFadeoutDestructible;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisStageGimmickHitEffect> ReactEffectArray;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> ReactEffectHandles;
    
    UPROPERTY(EditAnywhere)
    TArray<UNiagaraSystem*> HitEffects;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectHandles;
    
    UPROPERTY(EditAnywhere)
    TArray<UNiagaraSystem*> HitEffectsOnMesh;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectOnMeshHandles;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisStageSpawnEffect> HitEffectsOnMeshOffset;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectOnMeshOffsetHandles;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* HitSound;
    
    UPROPERTY()
    TArray<uint32> HitSoundPlayHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ImpacterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpacterExtraMassValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpacterExtraVelocityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpacterForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpacterMassThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ImpacterNoMultiPlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RevaivalWaitSecond;
    
    UPROPERTY(EditAnywhere)
    float DeformWeightDamageMul;
    
    UPROPERTY(VisibleAnywhere)
    TArray<APolarisDestructibleNiagaraActor*> PolarisDestructibleNiagaraActors;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<APolarisDestructibleNiagaraActor> DestructibleNiagaraActorClass;
    
    UPROPERTY(VisibleAnywhere)
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
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetMeshComponent() const;
    
private:
    UFUNCTION()
    void DoSpawnEffectTest();
    
};

