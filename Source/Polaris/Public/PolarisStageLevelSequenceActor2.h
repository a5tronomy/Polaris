#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "PolarisReducibleInterface.h"
#include "PolarisStageLevelSequenceActor2.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class POLARIS_API APolarisStageLevelSequenceActor2 : public AActor, public IPolarisReducibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequenceHardRef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite)
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer ReductionTagContainer;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagQuery ReductionTagQuery;
    
    APolarisStageLevelSequenceActor2(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

