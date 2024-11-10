#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDramaDummyActor.generated.h"

class USceneComponent;

UCLASS()
class POLARIS_API APolarisDramaDummyActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USceneComponent* DefaultSceneRoot;
    
public:
    APolarisDramaDummyActor(const FObjectInitializer& ObjectInitializer);

};

