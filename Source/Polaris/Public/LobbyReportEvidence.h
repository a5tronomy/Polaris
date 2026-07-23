#pragma once
#include "CoreMinimal.h"
#include "LobbyReportEvidence.generated.h"

USTRUCT(BlueprintType)
struct FLobbyReportEvidence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ScreenType;
    
    UPROPERTY(BlueprintReadWrite)
    int64 cosmosId;
    
    UPROPERTY(BlueprintReadWrite)
    FString battleId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 unixTime;
    
    UPROPERTY(BlueprintReadWrite)
    FString Text;
    
    UPROPERTY(BlueprintReadWrite)
    FString Object;
    
    UPROPERTY(BlueprintReadWrite)
    FString playerName;
    
    POLARIS_API FLobbyReportEvidence();
};

