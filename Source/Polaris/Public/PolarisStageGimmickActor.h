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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    int32 IsTouchBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsPlayerDamageBrakeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsPlayerDownBrakeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsHitBreakFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsPhysicsAutoAttackFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsStartPhysicsMeshFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    FVector2D PhysicsAutoAttackCheckVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float DamageImpluseStrengthMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float TouchImpluseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    ARadialForceActor* DestrictibleForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    APolarisRadialForceActor* DestrictibleForcePolaris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    TArray<AActor*> HitInvisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float HitInvisibleImpuleseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    UNiagaraSystem* DestrictibleNiagaraRBDAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    UStaticMesh* DestrictibleStaticMeshAssset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool DestrictibleEnableHardSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsDestrictibleWallBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    FVector DestrictibleWallBarrierFacadeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    FVector DestructibleForceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float DestructibleForceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float DestructibleForceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsDispDestructibleForce;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Category = "Polaris|StageGimmick")
    TArray<UPolarisStageAttackSphereComponent*> AttackArray;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Category = "Polaris|StageGimmick")
    UPrimitiveComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    APolarisStageWallActor* BattleSpaceWallActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsVanishWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float VanishingStartSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float VanishingEndSecond;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsVanishingDisableBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    bool IsNoFadeoutDestructible;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    TArray<FPolarisStageGimmickHitEffect> ReactEffectArray;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> ReactEffectHandles;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    TArray<UNiagaraSystem*> HitEffects;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectHandles;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    TArray<UNiagaraSystem*> HitEffectsOnMesh;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectOnMeshHandles;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    TArray<FPolarisStageSpawnEffect> HitEffectsOnMeshOffset;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> HitEffectOnMeshOffsetHandles;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    UAkAudioEvent* HitSound;
    
    UPROPERTY()
    TArray<uint32> HitSoundPlayHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    UAkAudioEvent* ImpacterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float ImpacterExtraMassValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float ImpacterExtraVelocityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float ImpacterForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float ImpacterMassThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    int32 ImpacterNoMultiPlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|StageGimmick")
    float RevaivalWaitSecond;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    float DeformWeightDamageMul;
    
    UPROPERTY(VisibleAnywhere, Category = "Polaris|StageGimmick")
    TArray<APolarisDestructibleNiagaraActor*> PolarisDestructibleNiagaraActors;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmick")
    TSubclassOf<APolarisDestructibleNiagaraActor> DestructibleNiagaraActorClass;
    
    UPROPERTY(VisibleAnywhere, Category = "Polaris|StageGimmick")
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
    UFUNCTION(BlueprintPure, Category = "Polaris|StageGimmick")
    UMeshComponent* GetMeshComponent() const;
    
private:
    UFUNCTION()
    void DoSpawnEffectTest();
    
};

