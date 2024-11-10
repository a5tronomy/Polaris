#pragma once
#include "CoreMinimal.h"
#include "LobbyBlackPenBanner.generated.h"

USTRUCT(BlueprintType)
struct FLobbyBlackPenBanner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 roundNum;
    
    UPROPERTY(BlueprintReadOnly)
    FString blackPenName;
    
    UPROPERTY(BlueprintReadOnly)
    FString blackPenImageId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 blackPenLvNow;
    
    UPROPERTY(BlueprintReadOnly)
    int32 blackPenXpNow;
    
    UPROPERTY(BlueprintReadOnly)
    int32 blackPenXpNext;
    
    UPROPERTY(BlueprintReadOnly)
    int32 blackPenRemainingTime;
    
    UPROPERTY(BlueprintReadOnly)
    int32 totalMissionNum;
    
    UPROPERTY(BlueprintReadOnly)
    int32 clearMissionNum;
    
    UPROPERTY(BlueprintReadOnly)
    bool premiumFlag;
    
    UPROPERTY(BlueprintReadOnly)
    bool onSeasonFlag;
    
    POLARIS_API FLobbyBlackPenBanner();
};

