#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatAddressType.h"
#include "LobbyChatAddressInfoUser.h"
#include "LobbyChatAddressInfo.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyChatAddressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyChatAddressType Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLobbyChatAddressInfoUser UserInfo;
    
    FLobbyChatAddressInfo();
};

