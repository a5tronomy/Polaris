#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyWatch.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyWatch : public UObject {
    GENERATED_BODY()
public:
    ULobbyWatch();

    UFUNCTION(BlueprintCallable)
    void TestFunc();
    
};

