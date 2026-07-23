#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyChatAddressUserInfoType.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyChatAddressUserInfoType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString playerName;
    
    UPROPERTY(BlueprintReadWrite)
    FString platformId;
    
    UPROPERTY(BlueprintReadWrite)
    FString polarisId;
    
    UPROPERTY(BlueprintReadWrite)
    FString cosmosId;
    
    UPROPERTY(BlueprintReadWrite)
    FString onlineId;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime DateTime;
    
    UPROPERTY(BlueprintReadWrite)
    int32 platform012;
    
    FLobbyChatAddressUserInfoType();
};

