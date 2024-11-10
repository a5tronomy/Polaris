#pragma once
#include "CoreMinimal.h"
#include "StoreItemBasicData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreItemBasicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText item_title_text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText raw_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString item_thumbnail_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString spare_item_thumbnail_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString item_preview_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool have_item_waza;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString item_waza_text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 unlock_id;
    
    FStoreItemBasicData();
};

