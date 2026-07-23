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
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* DefaultSceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageGimmickState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVanish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsNoFadeout;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsVanishWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VanishingStartSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VanishingEndSecond;
    
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
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UNiagaraComponent* DestructibleParticle;
    
    APolarisDestructibleNiagaraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnReset();
    
    UFUNCTION()
    void OnComponentFractureEvent(const FVector& HitPoint, const FVector& HitDirection);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnImpacterSound();
    
};

