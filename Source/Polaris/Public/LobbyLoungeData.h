#pragma once
#include "CoreMinimal.h"
#include "LobbyLoungeData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyLoungeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _lobbyId;
    
    UPROPERTY(BlueprintReadWrite)
    FString _lobbyUrl;
    
    UPROPERTY(BlueprintReadWrite)
    FString _lobbyName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _lobbyPlatform;
    
    UPROPERTY(BlueprintReadOnly)
    FString _lobbyPlace;
    
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
    
    UPROPERTY(BlueprintReadOnly)
    FString _lobbyIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FString _lobbyComment;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _lobbyCapacity;
    
    UPROPERTY(BlueprintReadOnly)
    FString _lobbyEventId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _lobbyMap;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _lobbyMachine;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> _lobbyOption;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _lobbyRules;
    
    UPROPERTY(BlueprintReadOnly)
    FString _endTime;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _remainingTime;
    
    POLARIS_API FLobbyLoungeData();
};

