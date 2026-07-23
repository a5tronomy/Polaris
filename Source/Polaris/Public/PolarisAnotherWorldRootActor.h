#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisAnotherWorldRootActor.generated.h"

class ALevelSequenceActor;
class APolarisCharacterActor;
class USceneComponent;

UCLASS()
class POLARIS_API APolarisAnotherWorldRootActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<ALevelSequenceActor*> LevelSequenceActors;
    
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    USceneComponent* DefaultComponent;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    APolarisCharacterActor* OwnerPlayer;
    
    APolarisAnotherWorldRootActor(const FObjectInitializer& ObjectInitializer);

};

