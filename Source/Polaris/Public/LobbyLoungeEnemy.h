#pragma once
#include "CoreMinimal.h"
#include "LobbyLoungeEnemy.generated.h"

USTRUCT(BlueprintType)
struct FLobbyLoungeEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _mainCharaId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _mainCharaRank;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _platform012;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> _displayNames;
    
    UPROPERTY(BlueprintReadWrite)
    FText _status;
    
    POLARIS_API FLobbyLoungeEnemy();
};

