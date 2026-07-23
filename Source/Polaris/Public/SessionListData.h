#pragma once
#include "CoreMinimal.h"
#include "SessionListData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSessionListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString session_robby_id;
    
    UPROPERTY(BlueprintReadOnly)
    FString session_name;
    
    UPROPERTY(BlueprintReadOnly)
    bool is_default_session_name;
    
    UPROPERTY(BlueprintReadOnly)
    FString lobby_name;
    
    UPROPERTY(BlueprintReadOnly)
    FString win_condition;
    
    UPROPERTY(BlueprintReadOnly)
    int32 max_public_slot;
    
    UPROPERTY(BlueprintReadOnly)
    int32 current_public_slot;
    
    UPROPERTY(BlueprintReadOnly)
    int32 max_private_slot;
    
    UPROPERTY(BlueprintReadOnly)
    int32 current_private_slot;
    
    UPROPERTY(BlueprintReadOnly)
    int32 same_time_battle_num;
    
    UPROPERTY(BlueprintReadOnly)
    int32 round_count;
    
    UPROPERTY(BlueprintReadOnly)
    bool wifi_flag;
    
    UPROPERTY(BlueprintReadOnly)
    int32 antena_state;
    
    UPROPERTY(BlueprintReadOnly)
    bool has_pass_code;
    
    UPROPERTY(BlueprintReadOnly)
    FString line_quality;
    
    UPROPERTY(BlueprintReadOnly)
    FString host_name;
    
    UPROPERTY(BlueprintReadOnly)
    FString platform_id;
    
    UPROPERTY(BlueprintReadOnly)
    FString polaris_id;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* host_characterIcon;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* host_rank;
    
    UPROPERTY(BlueprintReadOnly)
    int32 host_platformId;
    
    UPROPERTY(BlueprintReadOnly)
    FString host_language;
    
    UPROPERTY(BlueprintReadOnly)
    FString host_area;
    
    UPROPERTY(BlueprintReadOnly)
    FString cosmos_id;
    
    POLARIS_API FSessionListData();
};

