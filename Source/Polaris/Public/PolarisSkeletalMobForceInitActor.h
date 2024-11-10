#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisSkeletalMobForceInitActor.generated.h"

UCLASS()
class POLARIS_API APolarisSkeletalMobForceInitActor : public AActor {
    GENERATED_BODY()
public:
    APolarisSkeletalMobForceInitActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnShown();
    
};

