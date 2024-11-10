#pragma once
#include "CoreMinimal.h"
#include "LobbyChatMessage.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText ChatMessage;
    
    FLobbyChatMessage();
};

