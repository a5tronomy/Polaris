#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickWarZoneLightBeamState.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickWarZoneLightBeam.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class POLARIS_API APolarisStageGimmickWarZoneLightBeam : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EStageGimmickWarZoneLightBeamState, ULevelSequence*> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EStageGimmickWarZoneLightBeamState, ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<EStageGimmickWarZoneLightBeamState, ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageGimmickWarZoneLightBeamState LightBeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBroken;
    
    APolarisStageGimmickWarZoneLightBeam(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
};

