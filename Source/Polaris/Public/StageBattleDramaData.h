#pragma once
#include "CoreMinimal.h"
#include "StageBattleDramaData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FStageBattleDramaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequence_Reverse;
    
    POLARIS_API FStageBattleDramaData();
};

