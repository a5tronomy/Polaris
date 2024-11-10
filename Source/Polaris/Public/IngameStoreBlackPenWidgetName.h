#pragma once
#include "CoreMinimal.h"
#include "IngameStoreBlackPenWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FIngameStoreBlackPenWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName _unlock_name;
    
    FIngameStoreBlackPenWidgetName();
};

