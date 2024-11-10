#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "StoreItemPanelStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreItemPanelStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName sell_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStoreItemType StoreItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_root;
    
    FStoreItemPanelStruct();
};

