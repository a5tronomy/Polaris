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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelControl")
    TMap<EGeneralBattleEvent, FStageLevelSequence> BattleEventLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelControl")
    FStageBattleDramaData StageRound1LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelControl")
    FStageDestruction StageDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelControl")
    FStagePrestart StagePrestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelControl")
    TArray<ULevelSequence*> ResidentLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelControl")
    FStageLevelSequence ResetStageLevelSequence;
    
    UPROPERTY(BlueprintReadOnly, Category = "LevelControl")
    FGameplayTagQuery ReductionTagQuery;
    
    APolarisStageLevelControl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, Category = "LevelControl")
    void StopBattleEventLevelSequence();
    
    UFUNCTION(BlueprintCallable, Category = "LevelControl")
    void SetResetStageLevelSequencePlayer(TArray<ULevelSequencePlayer*> LevelSequencePlayer, TArray<ALevelSequenceActor*> LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable, Category = "LevelControl")
    void SetOnceStatus(EGeneralBattleEvent Type, bool flag);
    
    UFUNCTION(BlueprintCallable, Category = "LevelControl")
    void SetLevelSequencePlayer(EGeneralBattleEvent Type, TArray<ULevelSequencePlayer*> LevelSequencePlayer, TArray<ALevelSequenceActor*> LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable, Category = "LevelControl")
    void KeyOnEventForSequencer(EGeneralBattleEvent Type, int32 LevelSeqArrayNum);
    

    // Fix for true pure virtual functions not being implemented
};

