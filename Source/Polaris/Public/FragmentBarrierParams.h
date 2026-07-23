#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FragmentBarrierParams.generated.h"

UCLASS()
class POLARIS_API AFragmentBarrierParams : public AActor {
    GENERATED_BODY()
public:
    AFragmentBarrierParams(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyParams();
    
};

