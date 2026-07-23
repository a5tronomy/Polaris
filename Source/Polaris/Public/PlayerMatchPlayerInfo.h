#pragma once
#include "CoreMinimal.h"
#include "EPlayerMatchPLayerStatus.h"
#include "SessionPlayerName.h"
#include "PlayerMatchPlayerInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPlayerMatchPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FSessionPlayerName player_name;
    
    UPROPERTY(BlueprintReadOnly)
    FString cosmos_id;
    
    UPROPERTY()
    FString character_id;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* character_s;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* character_l;
    
    UPROPERTY()
    int32 rank_id;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* rank_s;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* rank_l;
    
    UPROPERTY(BlueprintReadOnly)
    int32 shogo_id;
    
    UPROPERTY(BlueprintReadOnly)
    FString Shogo;
    
    UPROPERTY()
    int32 shogo_bg_id;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* shogo_bg;
    
    UPROPERTY(BlueprintReadOnly)
    bool wifi_flag;
    
    UPROPERTY(BlueprintReadOnly)
    int32 antena_state;
    
    UPROPERTY(BlueprintReadWrite)
    EPlayerMatchPLayerStatus player_state;
    
    UPROPERTY(BlueprintReadWrite)
    int32 win_count;
    
    UPROPERTY(BlueprintReadOnly)
    FString Language;
    
    UPROPERTY(BlueprintReadOnly)
    FString Area;
    
    UPROPERTY(BlueprintReadOnly)
    int32 group_id;
    
    POLARIS_API FPlayerMatchPlayerInfo();
};

