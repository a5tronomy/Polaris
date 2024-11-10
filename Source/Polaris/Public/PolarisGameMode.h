#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "PolarisGameMode.generated.h"

UCLASS(NonTransient)
class POLARIS_API APolarisGameMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
    APolarisGameMode(const FObjectInitializer& ObjectInitializer);

};

