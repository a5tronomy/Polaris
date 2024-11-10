#pragma once
#include "CoreMinimal.h"
#include "PolarisBattlePlayerStartCamera.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisBattlePlayerStartCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* Camera1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* Camera2P;
    
    POLARIS_API FPolarisBattlePlayerStartCamera();
};

