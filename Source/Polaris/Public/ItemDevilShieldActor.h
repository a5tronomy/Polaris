#pragma once
#include "CoreMinimal.h"
#include "EventOnCriticalHitParam.h"
#include "EventOnGuardParam.h"
#include "EventOnHitParam.h"
#include "EventOnInitBattleParam.h"
#include "EventOnThrowDamageParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemDevilShieldActor.generated.h"

class APolarisCharacterActor;

UCLASS()
class POLARIS_API AItemDevilShieldActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> _owner;
    
public:
    AItemDevilShieldActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrowDamaged(int32 Damage);
    
    UFUNCTION()
    void OnThrowDamage(FEventOnThrowDamageParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize();
    
    UFUNCTION()
    void OnPreInitBattle();
    
    UFUNCTION()
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION()
    void onHit(FEventOnHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGuardHit();
    
    UFUNCTION()
    void onGuard(FEventOnGuardParam Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCustomize();
    
    UFUNCTION()
    void onCriticalHit(FEventOnCriticalHitParam Param);
    
};

