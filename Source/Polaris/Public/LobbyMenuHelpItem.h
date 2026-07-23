#pragma once
#include "CoreMinimal.h"
#include "LobbyMenuHelpItem.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyMenuHelpItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString textId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 dialogId;
    
    FLobbyMenuHelpItem();
};

