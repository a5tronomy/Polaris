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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageLevelSequence")
    ULevelSequence* LevelSequenceHardRef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "StageLevelSequence")
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, Category = "StageLevelSequence")
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, Category = "StageLevelSequence")
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "StageLevelSequence")
    FGameplayTagContainer ReductionTagContainer;
    
    UPROPERTY(BlueprintReadOnly, Category = "StageLevelSequence")
    FGameplayTagQuery ReductionTagQuery;
    
    APolarisStageLevelSequenceActor2(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

