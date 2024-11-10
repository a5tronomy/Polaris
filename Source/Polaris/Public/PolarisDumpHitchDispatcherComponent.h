#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisDumpHitchDispatcherComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisDumpHitchDispatcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPolarisDumpHitchDelegate, float, Game, float, draw);
    
    UPROPERTY(BlueprintAssignable)
    FPolarisDumpHitchDelegate OnDumpHitchDelegate;
    
    UPolarisDumpHitchDispatcherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDumpHitchCheck(bool bCheckOn);
    
};

