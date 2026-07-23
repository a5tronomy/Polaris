#pragma once
#include "CoreMinimal.h"
#include "ECharacterViewType.h"
#include "PlayingStats.h"
#include "PlayerProfileData.generated.h"

class ULobbyAvatarData;

USTRUCT(BlueprintType)
struct FPlayerProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 PlayerType;
    
    UPROPERTY(BlueprintReadOnly)
    FText polarisId;
    
    UPROPERTY(BlueprintReadOnly)
    FText platformId;
    
    UPROPERTY(BlueprintReadOnly)
    FText RawPlatformId;
    
    UPROPERTY(BlueprintReadOnly)
    FText cosmosId;
    
    UPROPERTY(BlueprintReadOnly)
    FText playerName;
    
    UPROPERTY(BlueprintReadWrite)
    FText comment;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MaxRankCharaId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 MaxRank;
    
    UPROPERTY(BlueprintReadOnly)
    FText TekkenPowerStr;
    
    UPROPERTY(BlueprintReadOnly)
    FPlayingStats PlayStats;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<int32> ShogoIds;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<int32> ShogoBgIds;
    
    UPROPERTY(BlueprintReadWrite)
    FString BackgroundImageId;
    
    UPROPERTY(BlueprintReadWrite)
    ECharacterViewType CharacterViewType;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FighterCostumeId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FighterCustomizeSlot;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AvatarCostumeId;
    
    UPROPERTY(BlueprintReadWrite)
    bool UseOnlineCustomizeData;
    
    UPROPERTY(BlueprintReadWrite)
    bool BannedCustomizeData;
    
    UPROPERTY(BlueprintReadWrite)
    FString motionID;
    
    UPROPERTY(BlueprintReadWrite)
    ULobbyAvatarData* AvatarData;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsFriend;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsFollow;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsRival;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsBlock;
    
    UPROPERTY(BlueprintReadOnly)
    int32 platformTag;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsBan;
    
    UPROPERTY(BlueprintReadOnly)
    FString JsonData;
    
    POLARIS_API FPlayerProfileData();
};

