#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyClientPlayerController.generated.h"

UCLASS()
class POLARIS_API ALobbyClientPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ALobbyClientPlayerController(const FObjectInitializer& ObjectInitializer);

};

