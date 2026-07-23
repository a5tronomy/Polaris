#pragma once
#include "CoreMinimal.h"
#include "EventOnInitBattleParam.h"
#include "PolarisItemBaseActor.h"
#include "ItemLongHairActor.generated.h"

class APolarisCharacterActor;

UCLASS()
class POLARIS_API AItemLongHairActor : public APolarisItemBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<APolarisCharacterActor> _owner;
    
public:
    AItemLongHairActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreInitialize();
    
    UFUNCTION()
    void OnPreInitBattle();
    
    UFUNCTION()
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCustomize();
    
};

