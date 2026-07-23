#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "StageLevelSequenceAsset.generated.h"

class UAkAudioEvent;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FStageLevelSequenceAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAkAudioEvent*> PlaySoundEventArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D LoopPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPauseAtEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlaySoundEventIntervalFrame;
    
    UPROPERTY(BlueprintReadWrite)
    int32 PlaySoundEventIntervalFrameCounter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer ReductionTagContainer;
    
    POLARIS_API FStageLevelSequenceAsset();
};

