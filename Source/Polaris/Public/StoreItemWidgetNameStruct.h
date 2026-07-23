#pragma once
#include "CoreMinimal.h"
#include "StoreItemWidgetNameStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreItemWidgetNameStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName thumbnail_image_name;
    
    UPROPERTY(EditAnywhere)
    FName owned_ui_name;
    
    UPROPERTY(EditAnywhere)
    FName owned_text;
    
    UPROPERTY(EditAnywhere)
    FName item_ribbon_name;
    
    UPROPERTY(EditAnywhere)
    FName price_ui_name;
    
    UPROPERTY(EditAnywhere)
    FName price_text_name;
    
    UPROPERTY(EditAnywhere)
    FName price_down_ui_name;
    
    UPROPERTY(EditAnywhere)
    FName price_down_text_name;
    
    UPROPERTY(EditAnywhere)
    FName tb_count_name;
    
    UPROPERTY(EditAnywhere)
    FName item_text_name;
    
    UPROPERTY(EditAnywhere)
    FName exclusive_ui_name;
    
    UPROPERTY(EditAnywhere)
    FName exclusive_text_name;
    
    UPROPERTY(EditAnywhere)
    FName exclusive_image_name;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> rarity_uis_name;
    
    UPROPERTY(EditAnywhere)
    FName null_time_name;
    
    UPROPERTY(EditAnywhere)
    FName tb_time_name;
    
    UPROPERTY(EditAnywhere)
    FName g_icon_name;
    
    FStoreItemWidgetNameStruct();
};

