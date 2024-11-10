#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyChatInput.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatInput : public UObject {
    GENERATED_BODY()
public:
    ULobbyChatInput();

    UFUNCTION(BlueprintCallable)
    void BindInput(APlayerController* InPC);
    
};

