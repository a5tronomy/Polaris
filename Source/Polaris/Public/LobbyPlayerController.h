#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPlayerController.generated.h"

UCLASS()
class POLARIS_API ALobbyPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ALobbyPlayerController(const FObjectInitializer& ObjectInitializer);

};

