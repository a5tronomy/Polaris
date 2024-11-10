#pragma once
#include "CoreMinimal.h"
#include "StageDestruction.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FStageDestruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> LevelSequences1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> LevelSequences2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> LevelSequences1P_Reverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> LevelSequences2P_Reverse;
    
    POLARIS_API FStageDestruction();
};

