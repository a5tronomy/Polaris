#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EStageGimmickState.h"
#include "PolarisDestructibleNiagaraActor.generated.h"

class UAkAudioEvent;
class UNiagaraComponent;
class USceneComponent;

UCLASS()
class POLARIS_API APolarisDestructibleNiagaraActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced, Category = "Polaris|DestructibleNiagara")
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    bool IsVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    bool IsNoFadeout;
    
    UPROPERTY(BlueprintReadWrite, Category = "Polaris|DestructibleNiagara")
    bool IsVanishWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    float VanishingStartSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    float VanishingEndSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    UAkAudioEvent* ImpacterAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    float ImpacterExtraMassValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    float ImpacterExtraVelocityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    float ImpacterForceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    float ImpacterMassThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Polaris|DestructibleNiagara")
    int32 ImpacterNoMultiPlayFrame;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly, Category = "Polaris|DestructibleNiagara")
    UNiagaraComponent* DestructibleParticle;
    
    APolarisDestructibleNiagaraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Category = "Polaris|DestructibleNiagara")
    void OnReset();
    
    UFUNCTION(Category = "Polaris|DestructibleNiagara")
    void OnComponentFractureEvent(const FVector& HitPoint, const FVector& HitDirection);
    
    UFUNCTION(BlueprintCallable, Category = "Polaris|DestructibleNiagara")
    void KeyOnImpacterSound();
    
};

