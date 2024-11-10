#pragma once
#include "CoreMinimal.h"
#include "BlackPenItemWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItemWidgetName {
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
    FName item_text_name;
    
    UPROPERTY(EditAnywhere)
    FName exclusive_ui_name;
    
    UPROPERTY(EditAnywhere)
    FName exclusive_text_name;
    
    UPROPERTY(EditAnywhere)
    FName exclusive_image_name;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> rarity_uis_name;
    
    FBlackPenItemWidgetName();
};

