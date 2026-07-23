#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EGeneralBattleEvent.h"
#include "PolarisReducibleInterface.h"
#include "StageBattleDramaData.h"
#include "StageDestruction.h"
#include "StageLevelSequence.h"
#include "StagePrestart.h"
#include "PolarisStageLevelControl.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class POLARIS_API APolarisStageLevelControl : public AActor, public IPolarisReducibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EGeneralBattleEvent, FStageLevelSequence> BattleEventLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStageBattleDramaData StageRound1LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStageDestruction StageDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStagePrestart StagePrestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ULevelSequence*> ResidentLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStageLevelSequence ResetStageLevelSequence;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagQuery ReductionTagQuery;
    
    APolarisStageLevelControl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void StopBattleEventLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void SetResetStageLevelSequencePlayer(TArray<ULevelSequencePlayer*> LevelSequencePlayer, TArray<ALevelSequenceActor*> LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void SetOnceStatus(EGeneralBattleEvent Type, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelSequencePlayer(EGeneralBattleEvent Type, TArray<ULevelSequencePlayer*> LevelSequencePlayer, TArray<ALevelSequenceActor*> LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnEventForSequencer(EGeneralBattleEvent Type, int32 LevelSeqArrayNum);
    

    // Fix for true pure virtual functions not being implemented
};

