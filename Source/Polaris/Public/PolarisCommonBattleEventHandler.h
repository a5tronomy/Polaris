#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventDispatcherObject.h"
#include "EventDispatcherObject.h"
#include "EventOnRageArtsBeginParam.h"
#include "EventOnRageArtsEndParam.h"
#include "PolarisCommonBattleEventHandler.generated.h"

UCLASS()
class APolarisCommonBattleEventHandler : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    UEventDispatcherObject::FOnRageArtsBegin OnRageArtsBeginDelegate;
    
    UPROPERTY(BlueprintAssignable)
    UEventDispatcherObject::FOnRageArtsEnd OnRageArtsEndDelegate;
    
    APolarisCommonBattleEventHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void onRageArtsEnd(const FEventOnRageArtsEndParam& InParam);
    
    UFUNCTION()
    void onRageArtsBegin(const FEventOnRageArtsBeginParam& InParam);
    
};

