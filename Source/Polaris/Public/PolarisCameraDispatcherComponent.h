#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisCameraDispatcherComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisCameraDispatcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPolarisCameraCutDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPolarisCameraCheckDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FPolarisCameraCheckDelegate OnCameraMove;
    
    UPROPERTY(BlueprintAssignable)
    FPolarisCameraCutDelegate OnCameraCut;
    
    UPolarisCameraDispatcherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraCutCheck(bool bCheckOn);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraCheck(bool bCheckOn);
    
};

