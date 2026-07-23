#pragma once
#include "CoreMinimal.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDoubleKOParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnKOParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnRageStateChangedParam.h"
#include "EventOnThrowDamageParam.h"
#include "EventOnTimeUpParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemCrowActor.generated.h"

class APolarisCharacterActor;

UCLASS()
class POLARIS_API AItemCrowActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> _owner;
    
public:
    AItemCrowActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWin();
    
    UFUNCTION()
    void OnTimeUp(FEventOnTimeUpParam Param);
    
    UFUNCTION()
    void OnThrowDamage(FEventOnThrowDamageParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevengePracticeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageStatusLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageStatusEntered();
    
    UFUNCTION()
    void onRageStateChanged(FEventOnRageStateChangedParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArtStart();
    
    UFUNCTION()
    void onRageArtsEnd(FEventOnRageArtsEndParam Param);
    
    UFUNCTION()
    void onRageArtsBegin(FEventOnRageArtsBeginParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArtEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize();
    
    UFUNCTION()
    void OnPreInitBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPracticeMain();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpponentEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNextRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoss();
    
    UFUNCTION()
    void OnKO(FEventOnKOParam Param);
    
    UFUNCTION()
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION()
    void onHit(FEventOnHitParam Param);
    
    UFUNCTION()
    void OnDoubleKO(FEventOnDoubleKOParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDemoStart();
    
    UFUNCTION()
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCauseHit();
    
};

