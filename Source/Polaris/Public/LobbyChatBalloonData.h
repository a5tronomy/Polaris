#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatAddressType.h"
#include "LobbyChatBalloonData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyChatBalloonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _message;
    
    UPROPERTY(BlueprintReadWrite)
    bool _sendNgWord;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _stampId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _templateId;
    
    UPROPERTY(BlueprintReadWrite)
    FName _stampName;
    
    UPROPERTY(BlueprintReadWrite)
    ELobbyChatAddressType _address;
    
    POLARIS_API FLobbyChatBalloonData();
};

