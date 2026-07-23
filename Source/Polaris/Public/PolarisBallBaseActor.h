#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAnimState.h"
#include "PolarisBallBaseActor.generated.h"

UCLASS()
class POLARIS_API APolarisBallBaseActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BallId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsVisibleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsToPlayAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAnimState AnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationFrame;
    
    UPROPERTY(BlueprintReadWrite, Interp, VisibleAnywhere)
    float FresnelIntensity;
    
    APolarisBallBaseActor(const FObjectInitializer& ObjectInitializer);

};

