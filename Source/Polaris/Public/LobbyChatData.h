#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LobbyChatData.generated.h"

USTRUCT(BlueprintType)
struct FLobbyChatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _name;
    
    UPROPERTY(BlueprintReadWrite)
    FString _polarisId;
    
    UPROPERTY(BlueprintReadWrite)
    FString _cosmosId;
    
    UPROPERTY(BlueprintReadWrite)
    FString _onlineId;
    
    UPROPERTY(BlueprintReadWrite)
    FDateTime _time;
    
    UPROPERTY(BlueprintReadWrite)
    FString _message;
    
    UPROPERTY(BlueprintReadWrite)
    bool _sendNgWord;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _stampId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _templateId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _platform012;
    
    UPROPERTY(BlueprintReadWrite)
    bool _isSelfMessage;
    
    UPROPERTY(BlueprintReadWrite)
    FName _stampName;
    
    UPROPERTY(BlueprintReadWrite)
    FString _message_id;
    
    UPROPERTY(BlueprintReadWrite)
    FString FromPolarisId;
    
    UPROPERTY(BlueprintReadWrite)
    FString FromUserName;
    
    UPROPERTY(BlueprintReadWrite)
    FString FromPlatformId;
    
    UPROPERTY(BlueprintReadWrite)
    FString targetUserId;
    
    UPROPERTY(BlueprintReadWrite)
    bool System;
    
    POLARIS_API FLobbyChatData();
};

