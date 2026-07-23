#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "PolarisTestTaskArg.h"
#include "PolarisTestInterface.generated.h"

UCLASS(Blueprintable)
class UPolarisTestInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 LocalState;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LocalCounter;
    
    UPolarisTestInterface();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Wait(int32 frame, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TestImpl(float DeltaTime, const FPolarisTestTaskArg& Argument);
    
    UFUNCTION(BlueprintCallable)
    void Done();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Delay(float Time, FLatentActionInfo LatentInfo);
    
};

