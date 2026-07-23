#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomDeviceWatcher.generated.h"

UCLASS(BlueprintType)
class CRIWARERUNTIME_API UAtomDeviceWatcher : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceUpdated);
    
    UPROPERTY(BlueprintAssignable)
    FOnDeviceUpdated OnDeviceUpdated;
    
    UAtomDeviceWatcher();

    UFUNCTION(BlueprintCallable)
    FString GetDeviceName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDeviceChannelCount();
    
};

