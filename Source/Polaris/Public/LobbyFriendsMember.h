#pragma once
#include "CoreMinimal.h"
#include "LobbyFriendsMember.generated.h"

USTRUCT(BlueprintType)
struct FLobbyFriendsMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _name;
    
    UPROPERTY(BlueprintReadWrite)
    FString _polarisId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _platform012;
    
    UPROPERTY(BlueprintReadWrite)
    FString _mainCharaId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _mainCharaRank;
    
    UPROPERTY(BlueprintReadWrite)
    FString _lobbyId;
    
    UPROPERTY(BlueprintReadWrite)
    FString _lobbyName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _lobbyPlatform;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _status;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _platform;
    
    UPROPERTY(BlueprintReadWrite)
    FString _platformId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _friendStatus;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _followStatus;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _rivalStatus;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _blockStatus;
    
    UPROPERTY(BlueprintReadWrite)
    FString _playerName;
    
    UPROPERTY(BlueprintReadWrite)
    FString _lobbyUrl;
    
    UPROPERTY(BlueprintReadWrite)
    FString _battleId;
    
    UPROPERTY(BlueprintReadWrite)
    FString _object;
    
    UPROPERTY(BlueprintReadWrite)
    FString _profileComment;
    
    POLARIS_API FLobbyFriendsMember();
};

