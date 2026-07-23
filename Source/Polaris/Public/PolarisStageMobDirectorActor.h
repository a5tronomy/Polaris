#pragma once
#include "CoreMinimal.h"
#include "PolarisStageRewindableDirectorActor.h"
#include "PolarisStageMobDirectorActor.generated.h"

UCLASS()
class POLARIS_API APolarisStageMobDirectorActor : public APolarisStageRewindableDirectorActor {
    GENERATED_BODY()
public:
    APolarisStageMobDirectorActor(const FObjectInitializer& ObjectInitializer);

};

