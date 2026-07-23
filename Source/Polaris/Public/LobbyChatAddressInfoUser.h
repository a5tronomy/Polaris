#pragma once
#include "CoreMinimal.h"
#include "LobbyChatAddressInfoUser.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyChatAddressInfoUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString platformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString polarisId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString cosmosId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString onlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlatformTag012;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString UpdateDateTime;
    
    FLobbyChatAddressInfoUser();
};

