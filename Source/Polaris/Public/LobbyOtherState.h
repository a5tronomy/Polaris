#pragma once
#include "CoreMinimal.h"
#include "LobbyAvatarData_Struct.h"
#include "LobbyChatBalloonData.h"
#include "LobbyCoordinate.h"
#include "LobbyOtherState.generated.h"

USTRUCT(BlueprintType)
struct FLobbyOtherState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString _name;
    
    UPROPERTY(BlueprintReadOnly)
    FString _platformId;
    
    UPROPERTY(BlueprintReadOnly)
    FString _polarisId;
    
    UPROPERTY(BlueprintReadOnly)
    FString _userId;
    
    UPROPERTY(BlueprintReadOnly)
    FName _cosmosId;
    
    UPROPERTY(BlueprintReadOnly)
    int64 _cosmosId2;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _platform;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _platform012;
    
    UPROPERTY(BlueprintReadOnly)
    FLobbyAvatarData_Struct _customize;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _state;
    
    UPROPERTY(BlueprintReadOnly)
    FString _message;
    
    UPROPERTY(BlueprintReadOnly)
    FString _balloonChatText;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _balloonChatStamp;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _balloonChatTemplate;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _chatBalloonCount;
    
    UPROPERTY(BlueprintReadOnly)
    FLobbyChatBalloonData _chatBalloonData;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _sitting;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _seatId;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FLobbyCoordinate> _coordinates;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> _displayNames;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _maxRank;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _playerData;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _mainCharacterRank;
    
    UPROPERTY(BlueprintReadOnly)
    FString _mainCharacterId;
    
    UPROPERTY(BlueprintReadOnly)
    FString _playerMatchId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _releaseSeatFlag;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLaterJoin;
    
    POLARIS_API FLobbyOtherState();
};

