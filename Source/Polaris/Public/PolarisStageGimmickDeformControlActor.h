#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "PolarisStageGimmicDeformGimmikMesh.h"
#include "PolarisStageGimmicDeformMesh.h"
#include "PolarisStageGimmickBaseActor.h"
#include "Templates/SubclassOf.h"
#include "PolarisStageGimmickDeformControlActor.generated.h"

class AActor;
class AController;
class APolarisDestructibleNiagaraActor;
class APolarisStageGimmickActor;
class AStaticMeshActor;
class UBoxComponent;
class UDamageType;
class UNiagaraComponent;
class UPolarisColorBlendComponent;
class UPrimitiveComponent;

UCLASS()
class POLARIS_API APolarisStageGimmickDeformControlActor : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* BoxCollisionComponent;
    
    UPROPERTY(EditAnywhere)
    bool IsTakeDamage;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisStageGimmicDeformMesh> MeshArray;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> MeshEffectHandles;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisStageGimmicDeformGimmikMesh> GimmickArray;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> GimmickEffectHandles;
    
    UPROPERTY(EditAnywhere)
    TArray<AStaticMeshActor*> FloorDecalMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<APolarisStageGimmickActor*> StartPhysicsMeshs;
    
    UPROPERTY(EditAnywhere)
    float DestructDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    float WeightDamageMul;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UPolarisColorBlendComponent*> PolarisColorBlendComponents;
    
    UPROPERTY(EditAnywhere)
    bool IsVanish;
    
    UPROPERTY(EditAnywhere)
    float VanishingStartSecond;
    
    UPROPERTY(EditAnywhere)
    float VanishingEndSecond;
    
    UPROPERTY(EditAnywhere)
    bool IsVanishingDisableBarrier;
    
    UPROPERTY()
    int32 LastImpulseStrengthType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<APolarisDestructibleNiagaraActor> DestructibleNiagaraActorClass;
    
    UPROPERTY(VisibleAnywhere)
    TArray<APolarisDestructibleNiagaraActor*> PolarisDestructibleNiagaraActors;
    
    APolarisStageGimmickDeformControlActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnTakeRadialDamageEvent(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION()
    void OnTakePointDamageEvent(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
};

