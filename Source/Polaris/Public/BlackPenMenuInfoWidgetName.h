#pragma once
#include "CoreMinimal.h"
#include "BlackPenMenuInfoWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMenuInfoWidgetName {
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
    FName _tb_command;
    
    FBlackPenMenuInfoWidgetName();
};

