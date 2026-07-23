#pragma once
#include "CoreMinimal.h"
#include "LobbyInventoryData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName ItemId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Num;
    
    UPROPERTY(BlueprintReadOnly)
    int32 maxNum;
    
    UPROPERTY(BlueprintReadOnly)
    FName Category;
    
    POLARIS_API FLobbyInventoryData();
};

