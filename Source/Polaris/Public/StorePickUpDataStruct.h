#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StorePickUpDataStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FStorePickUpDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> _banner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> _header;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool check_owned_status;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName check_owned_item_id;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool enabled_when_owned;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _version;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _comment;
    
    FStorePickUpDataStruct();
};

