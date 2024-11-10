#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "EStageGimmickState.h"
#include "PolarisStagePhysicsActor.generated.h"

class UAkAudioEvent;

UCLASS()
class POLARIS_API APolarisStagePhysicsActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
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
    
    APolarisStagePhysicsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnReset();
    
    UFUNCTION()
    void OnDamage(const FVector& HitPoint, const FVector& HitDirection);
    
protected:
    UFUNCTION()
    void OnComponentFractureEvent(const FVector& HitPoint, const FVector& HitDirection);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnImpacterSound();
    
};

