#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnTimerFinishedDelegateDelegate.h"
#include "OnTimerUpdateDelegateDelegate.h"
#include "TimerFinishedDelegateDelegate.h"
#include "TimerUpdateDelegateDelegate.h"
#include "PolarisCountdownTimerController.generated.h"

class UPolarisCountdownTimerController;

UCLASS(BlueprintType)
class POLARIS_API UPolarisCountdownTimerController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 m_remainingTime;
    
    UPROPERTY()
    UObject* m_worldContextObject;
    
    UPROPERTY(BlueprintAssignable)
    FOnTimerUpdateDelegate OnTimerUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTimerFinishedDelegate OnTimerFinished;
    
public:
    UPolarisCountdownTimerController();

    UFUNCTION(BlueprintCallable)
    void StopCountdown();
    
    UFUNCTION(BlueprintCallable)
    void StartCountdown(int32 remainingSeconds);
    
private:
    UFUNCTION()
    void OnTimerTick();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPolarisCountdownTimerController* CreateCountdownTimer(UObject* WorldContextObject, int32 initialSeconds, FTimerUpdateDelegate updateDelegate, FTimerFinishedDelegate finishedDelegate);
    
};

