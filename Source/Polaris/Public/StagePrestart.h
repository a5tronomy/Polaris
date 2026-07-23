#pragma once
#include "CoreMinimal.h"
#include "StagePrestart.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FStagePrestart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequences1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequences2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequencesPrestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequencesPrestart_Reverse;
    
    POLARIS_API FStagePrestart();
};

