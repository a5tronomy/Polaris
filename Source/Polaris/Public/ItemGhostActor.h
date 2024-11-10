#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnDoubleKOParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnKOParam.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "EventOnStageBreakEventParam.h"
#include "EventOnThrowDamageParam.h"
#include "EventOnTimeUpParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemGhostActor.generated.h"

class APolarisCharacterActor;

UCLASS()
class POLARIS_API AItemGhostActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutInTimingMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutInTimingMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutGoOpponentRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutInWaitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeOutInWaitMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CircleMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CircleMoveRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCircleGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CircleMoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMoveToOpponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveToOpponentWaitTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveToOpponentWaitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsLockForHomeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSendHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEntranceChase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMoveToVicinity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GhostHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GhostOffsetDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GhostOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GhostHomeRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator GhostHomeRelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GhostHomeWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> MoveToVicintyDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveToVicintyWaitTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveToVicintyWaitTimeMax;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsBattleMode;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float MaxHeight;
    
private:
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> _owner;
    
public:
    AItemGhostActor(const FObjectInitializer& ObjectInitializer);

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
    void OnBattleBegin();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBalconyBreak();
    
};

