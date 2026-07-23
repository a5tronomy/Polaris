#pragma once
#include "CoreMinimal.h"
#include "LobbyNetwork.generated.h"

USTRUCT(BlueprintType)
struct FLobbyNetwork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> _servers;
    
    POLARIS_API FLobbyNetwork();
};

