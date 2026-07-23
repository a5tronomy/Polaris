#pragma once
#include "CoreMinimal.h"
#include "LobbyEnemyInfo.generated.h"

USTRUCT(BlueprintType)
struct FLobbyEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString _polarisId;
    
    UPROPERTY(BlueprintReadOnly)
    FString _platformId;
    
    UPROPERTY(BlueprintReadOnly)
    FString _name;
    
    UPROPERTY(BlueprintReadOnly)
    FString _userId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _platform;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _platform012;
    
    UPROPERTY(BlueprintReadOnly)
    FName _cosmosId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _state;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> _displayNames;
    
    POLARIS_API FLobbyEnemyInfo();
};

