#pragma once
#include "CoreMinimal.h"
#include "InviteSessionInfo.generated.h"

USTRUCT(BlueprintType)
struct FInviteSessionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString _session_id;
    
    UPROPERTY(BlueprintReadWrite)
    FString _session_name;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _type;
    
    UPROPERTY(BlueprintReadWrite)
    FString _lobby_id;
    
    UPROPERTY(BlueprintReadWrite)
    FString _invite_user_id;
    
    UPROPERTY(BlueprintReadWrite)
    FString _invite_user_platform_id;
    
    UPROPERTY(BlueprintReadWrite)
    FString _invite_user_name;
    
    UPROPERTY(BlueprintReadWrite)
    FString _invite_user_polaris_id;
    
    UPROPERTY(BlueprintReadWrite)
    FString _invite_user_online_id;
    
    UPROPERTY(BlueprintReadWrite)
    int32 _invite_user_platform_tag;
    
    UPROPERTY(BlueprintReadWrite)
    FString _invite_at;
    
    UPROPERTY(BlueprintReadWrite)
    bool _platform_flag;
    
    POLARIS_API FInviteSessionInfo();
};

