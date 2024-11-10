#pragma once
#include "CoreMinimal.h"
#include "PolarisStageForcusCamera.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisStageForcusCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* Camera1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* Camera2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BattleRound;
    
    POLARIS_API FPolarisStageForcusCamera();
};

