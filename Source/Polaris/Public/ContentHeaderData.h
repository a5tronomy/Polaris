#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ContentHeaderData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FContentHeaderData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _content_item_id;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText _titleText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> _header;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _version;
    
    FContentHeaderData();
};

