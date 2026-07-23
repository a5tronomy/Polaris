#pragma once
#include "CoreMinimal.h"
#include "EZoneType.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDoubleKOParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnKOParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnRageStateChangedParam.h"
#include "EventOnStageBreakEventParam.h"
#include "EventOnThrowDamageParam.h"
#include "EventOnTimeUpParam.h"
#include "EventOnZoneBeginParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemGhostActor.generated.h"

class APolarisCharacterActor;

UCLASS()
class POLARIS_API AItemGhostActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsBattleMode;
    
private:
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> _owner;
    
public:
    AItemGhostActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnZoneStart(EZoneType ZoneType);
    
public:
    UFUNCTION()
    void OnZoneBegin(FEventOnZoneBeginParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVictorius();
    
public:
    UFUNCTION()
    void OnTimeUp(FEventOnTimeUpParam Param);
    
    UFUNCTION()
    void OnThrowDamage(FEventOnThrowDamageParam Param);
    
    UFUNCTION()
    void OnStageBreakEvent(FEventOnStageBreakEventParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRoundActionStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRevengePracticeStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedHit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageStatusLeft();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageStatusEntered();
    
public:
    UFUNCTION()
    void onRageStateChanged(FEventOnRageStateChangedParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageArtStart();
    
public:
    UFUNCTION()
    void onRageArtsEnd(FEventOnRageArtsEndParam Param);
    
    UFUNCTION()
    void onRageArtsBegin(FEventOnRageArtsBeginParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRageArtEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPreInitBattleInternal();
    
public:
    UFUNCTION()
    void OnPreInitBattle();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPracticeMain();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEntrance();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerContinueStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpponentEntrance();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOpponentContinueStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNextBattleBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoss();
    
public:
    UFUNCTION()
    void OnKO(FEventOnKOParam Param);
    
    UFUNCTION()
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION()
    void onHit(FEventOnHitParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnFloorBreak();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDraw();
    
public:
    UFUNCTION()
    void OnDoubleKO(FEventOnDoubleKOParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDemoStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDefeated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCustomize();
    
public:
    UFUNCTION()
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCauseHit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBattleBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBalconyBreak();
    
};

