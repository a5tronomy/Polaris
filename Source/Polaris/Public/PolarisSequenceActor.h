#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisSequenceActor.generated.h"

class ALevelSequenceActor;

UCLASS()
class POLARIS_API APolarisSequenceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<ALevelSequenceActor> LevelSequenceActor;
    
    APolarisSequenceActor(const FObjectInitializer& ObjectInitializer);

};

