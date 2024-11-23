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
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickDeformControl")
    UBoxComponent* BoxCollisionComponent;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    bool IsTakeDamage;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    TArray<FPolarisStageGimmicDeformMesh> MeshArray;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> MeshEffectHandles;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    TArray<FPolarisStageGimmicDeformGimmikMesh> GimmickArray;
    
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UNiagaraComponent>> GimmickEffectHandles;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    TArray<AStaticMeshActor*> FloorDecalMeshes;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    TArray<APolarisStageGimmickActor*> StartPhysicsMeshs;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    float DestructDelayMaxTime;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    float WeightDamageMul;
    
    UPROPERTY(Instanced, VisibleAnywhere, Category = "Polaris|StageGimmickDeformControl")
    TArray<UPolarisColorBlendComponent*> PolarisColorBlendComponents;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    bool IsVanish;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    float VanishingStartSecond;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    float VanishingEndSecond;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    bool IsVanishingDisableBarrier;
    
    UPROPERTY()
    int32 LastImpulseStrengthType;
    
    UPROPERTY(EditAnywhere, Category = "Polaris|StageGimmickDeformControl")
    TSubclassOf<APolarisDestructibleNiagaraActor> DestructibleNiagaraActorClass;
    
    UPROPERTY(VisibleAnywhere, Category = "Polaris|StageGimmickDeformControl")
    TArray<APolarisDestructibleNiagaraActor*> PolarisDestructibleNiagaraActors;
    
    APolarisStageGimmickDeformControlActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Category = "Polaris|StageGimmickDeformControl")
    void OnTakeRadialDamageEvent(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(Category = "Polaris|StageGimmickDeformControl")
    void OnTakePointDamageEvent(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
};

