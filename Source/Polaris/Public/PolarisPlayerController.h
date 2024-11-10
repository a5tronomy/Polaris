#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PolarisPlayerController.generated.h"

UCLASS()
class POLARIS_API APolarisPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    APolarisPlayerController(const FObjectInitializer& ObjectInitializer);

};

