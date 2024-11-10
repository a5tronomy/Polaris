#pragma once
#include "CoreMinimal.h"
#include "BlackPenItemSmallWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItemSmallWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName thumbnail_image_name;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> rarity_uis_name;
    
    UPROPERTY(EditAnywhere)
    FName locked_image_name;
    
    UPROPERTY(EditAnywhere)
    FName tc_panel_name;
    
    UPROPERTY(EditAnywhere)
    FName tc_text_name;
    
    UPROPERTY(EditAnywhere)
    FName own_panel_name;
    
    FBlackPenItemSmallWidgetName();
};

