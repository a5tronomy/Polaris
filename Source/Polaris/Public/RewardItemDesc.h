#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RewardItemDesc.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FRewardItemDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString item_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString item_raw_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString icon_text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor icon_bg_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* thumbnail_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString thumbnail_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString support_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString target_fighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool can_display_char_summary;
    
    POLARIS_API FRewardItemDesc();
};

