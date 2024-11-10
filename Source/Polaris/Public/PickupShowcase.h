#pragma once
#include "CoreMinimal.h"
#include "EStoreItemAttribute.h"
#include "PickupShowcase.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPickupShowcase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _bannerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _item_thumbnail_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _item_preview_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStoreItemAttribute _sellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText _titleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText _copyText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool check_owned_status;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName check_owned_item_id;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool enabled_when_owned;
    
    FPickupShowcase();
};

