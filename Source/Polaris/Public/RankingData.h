#pragma once
#include "CoreMinimal.h"
#include "RankingData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FRankingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool IsValid;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite)
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FighterRank;
    
    UPROPERTY(BlueprintReadWrite)
    FString cosmosId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Platform;
    
    UPROPERTY(BlueprintReadWrite)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite)
    FText onlineId;
    
    UPROPERTY(BlueprintReadWrite)
    FText polarisId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ShogoId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ShogoBgId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Score;
    
    FRankingData();
};

