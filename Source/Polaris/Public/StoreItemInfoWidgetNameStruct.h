#pragma once
#include "CoreMinimal.h"
#include "StoreItemInfoWidgetNameStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreItemInfoWidgetNameStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _rarity_ids;
    
    UPROPERTY(EditAnywhere)
    FName _category_iDs;
    
    UPROPERTY(EditAnywhere)
    FName _category_texts;
    
    UPROPERTY(EditAnywhere)
    FName _item_name_texts;
    
    UPROPERTY(EditAnywhere)
    FName _thumbnail_image;
    
    UPROPERTY(EditAnywhere)
    FName _price_down;
    
    UPROPERTY(EditAnywhere)
    FName _price_text;
    
    UPROPERTY(EditAnywhere)
    FName _price_down_text;
    
    UPROPERTY(EditAnywhere)
    FName _horizontal_price_text;
    
    UPROPERTY(EditAnywhere)
    FName _tb_Count;
    
    UPROPERTY(EditAnywhere)
    FName _tb_command;
    
    UPROPERTY(EditAnywhere)
    FName _null_time;
    
    UPROPERTY(EditAnywhere)
    FName _tb_time;
    
    FStoreItemInfoWidgetNameStruct();
};

