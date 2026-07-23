#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStageGimmickWarZoneHeliState.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickWarZoneHeli.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class POLARIS_API APolarisStageGimmickWarZoneHeli : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EStageGimmickWarZoneHeliState, ULevelSequence*> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EStageGimmickWarZoneHeliState, ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EStageGimmickWarZoneHeliState, ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D BreakLevelSequence_LoopPoint;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EStageGimmickWarZoneHeliState HeliState;
    
    APolarisStageGimmickWarZoneHeli(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
};

