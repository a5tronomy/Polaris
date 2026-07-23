#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickST21ElevatorState.h"
#include "EventOnChangeStageLightParam.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickST21Elevator.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class POLARIS_API APolarisStageGimmickST21Elevator : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EStageGimmickST21ElevatorState, ULevelSequence*> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EStageGimmickST21ElevatorState, ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EStageGimmickST21ElevatorState, ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EStageGimmickST21ElevatorState ElevatorState;
    
    UPROPERTY(VisibleAnywhere)
    float CurrentFrame;
    
    APolarisStageGimmickST21Elevator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeStageLight(FEventOnChangeStageLightParam Param);
    
};

