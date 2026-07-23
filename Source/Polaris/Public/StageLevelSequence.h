#pragma once
#include "CoreMinimal.h"
#include "EStageLightType.h"
#include "StageLevelSequenceAsset.h"
#include "StageLevelSequence.generated.h"

class ALevelSequenceActor;
class ULevelSequencePlayer;

USTRUCT(BlueprintType)
struct FStageLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FStageLevelSequenceAsset> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageLightType LightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsOnce;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsOnceStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsStopAtInitBattle;
    
    POLARIS_API FStageLevelSequence();
};

