#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EContentOwendCheckType.h"
#include "ContentPanelData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FContentPanelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _content_item_id;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText _text_id;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> _dialog_thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> _container_ids;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _version;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EContentOwendCheckType check_owned_type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> check_content_type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> _owned_check_items;
    
    FContentPanelData();
};

