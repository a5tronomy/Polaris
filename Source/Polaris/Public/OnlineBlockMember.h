#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnlineBlockMember.generated.h"

USTRUCT(BlueprintType)
struct FOnlineBlockMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _name;
    
    UPROPERTY(BlueprintReadWrite)
    FString _polarisId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _platform;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _platform012;
    
    UPROPERTY(BlueprintReadWrite)
    FString _mainCharaId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _mainCharaRank;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime _utcDateTime;
    
    UPROPERTY(BlueprintReadWrite)
    FString _playerName;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> _displayNames;
    
    UPROPERTY(BlueprintReadWrite)
    FString _platformId;
    
    POLARIS_API FOnlineBlockMember();
};

