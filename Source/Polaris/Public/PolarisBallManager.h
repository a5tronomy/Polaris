#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisBallManager.generated.h"

class APolarisBallBaseActor;

UCLASS()
class POLARIS_API APolarisBallManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<uint32, APolarisBallBaseActor*> BallActors;
    
public:
    APolarisBallManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    APolarisBallBaseActor* GetCurrentBallActor();
    
};

