#pragma once
#include "CoreMinimal.h"
#include "PolarisPlayerController.h"
#include "PolarisBattlePlayerController.generated.h"

UCLASS()
class POLARIS_API APolarisBattlePlayerController : public APolarisPlayerController {
    GENERATED_BODY()
public:
    APolarisBattlePlayerController(const FObjectInitializer& ObjectInitializer);

};

