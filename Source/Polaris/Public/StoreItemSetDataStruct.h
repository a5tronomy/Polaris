#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EStoreItemClassType.h"
#include "StoreItemSetDataStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FStoreItemSetDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStoreItemClassType _classType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> _thumbnail;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> _preview;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _rarity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _version;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _comment;
    
    FStoreItemSetDataStruct();
};

