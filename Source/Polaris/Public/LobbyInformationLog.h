#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyInformationLog.generated.h"

USTRUCT(BlueprintType)
struct FLobbyInformationLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 reason;
    
    UPROPERTY(BlueprintReadOnly)
    int32 coinNum;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime eventDate;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime startDate;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime endDate;
    
    UPROPERTY(BlueprintReadOnly)
    int32 limitAt;
    
    POLARIS_API FLobbyInformationLog();
};

