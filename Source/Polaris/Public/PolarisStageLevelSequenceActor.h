#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "PolarisStageLevelSequenceActor.generated.h"

class ULevelSequence;

UCLASS()
class POLARIS_API APolarisStageLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequenceHardRef;
    
    APolarisStageLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

