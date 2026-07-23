#pragma once
#include "CoreMinimal.h"
#include "PolarisMobAnimal.h"
#include "PolarisMobAnimalBirdBase.generated.h"

UCLASS(Abstract)
class POLARIS_API APolarisMobAnimalBirdBase : public APolarisMobAnimal {
    GENERATED_BODY()
public:
    APolarisMobAnimalBirdBase(const FObjectInitializer& ObjectInitializer);

};

