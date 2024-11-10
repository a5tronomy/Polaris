#pragma once
#include "CoreMinimal.h"
#include "IngameStoreMenuWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FIngameStoreMenuWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _footer_bg_panel_name;
    
    UPROPERTY(EditAnywhere)
    FName _store_money_widget_name;
    
    FIngameStoreMenuWidgetName();
};

