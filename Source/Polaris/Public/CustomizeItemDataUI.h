#pragma once
#include "CoreMinimal.h"
#include "CUS_ColorPaletteEnum.h"
#include "CUS_DefaultFlagEnum.h"
#include "CustomizeItemDataUI.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 item_unique_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 item_common_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString asset_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 fighter_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 item_position_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString text_id_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString text_id_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    CUS_DefaultFlagEnum default_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rarety;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_fight_money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_ingame_store;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_blackpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_color_editable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_sp_effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_unlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_common;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_testing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    CUS_ColorPaletteEnum palette_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_exclusive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_reset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_remove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* thumbnail;
    
    FCustomizeItemDataUI();
};

