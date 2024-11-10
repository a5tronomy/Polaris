#pragma once
#include "CoreMinimal.h"
#include "LobbyLoungeData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyLoungeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString _lobbyName;
    
    UPROPERTY(BlueprintReadOnly)
    FString _lobbyPlace;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _lobbyPlatform;
    
    UPROPERTY(BlueprintReadOnly)
    FString _lobbyUrl;
    
    UPROPERTY(BlueprintReadOnly)
    FString _name;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _login;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _single;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _muliti;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _group;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _ball;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _practice;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _teaching;
    
    POLARIS_API FLobbyLoungeData();
};

