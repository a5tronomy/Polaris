#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisStageGimmickArenaFloorAdsState.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickArenaFloorAds.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class POLARIS_API APolarisStageGimmickArenaFloorAds : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EPolarisStageGimmickArenaFloorAdsState, ULevelSequence*> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EPolarisStageGimmickArenaFloorAdsState, ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EPolarisStageGimmickArenaFloorAdsState, ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D FightLoopPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReadyFrame;
    
    APolarisStageGimmickArenaFloorAds(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
};

