#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisMobAnimalGroup.generated.h"

UCLASS()
class POLARIS_API APolarisMobAnimalGroup : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    APolarisMobAnimalGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireOnGroup();
    
};

