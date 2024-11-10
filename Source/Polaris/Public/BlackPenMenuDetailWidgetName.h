#pragma once
#include "CoreMinimal.h"
#include "BlackPenMenuDetailWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMenuDetailWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _ribbon;
    
    UPROPERTY(EditAnywhere)
    FName _item_info;
    
    UPROPERTY(EditAnywhere)
    FName _parent_set_text;
    
    UPROPERTY(EditAnywhere)
    FName _countable_parent;
    
    UPROPERTY(EditAnywhere)
    FName _countable_text;
    
    UPROPERTY(EditAnywhere)
    FName _countable_count_text;
    
    UPROPERTY(EditAnywhere)
    FName _countable_max_text;
    
    UPROPERTY(EditAnywhere)
    FName _owned_info_parent;
    
    UPROPERTY(EditAnywhere)
    FName _store_text_button;
    
    UPROPERTY(EditAnywhere)
    FName _store_text_button2_ex;
    
    UPROPERTY(EditAnywhere)
    FName _store_text_button2_ex2;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_detail;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_sub_title0;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_sub_title1;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_sub_box0;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_sub_box1;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_set;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_sub_title2;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_sub_title3;
    
    UPROPERTY(EditAnywhere)
    FName _bottom_set_num;
    
    UPROPERTY(EditAnywhere)
    FName _set_grid_panel;
    
    UPROPERTY(EditAnywhere)
    FName _set_scrollbox;
    
    FBlackPenMenuDetailWidgetName();
};

