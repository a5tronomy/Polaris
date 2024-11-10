#pragma once
#include "CoreMinimal.h"
#include "ItemPrefabDataStruct.generated.h"

class UBaseCharacterItem;
class UBaseItem;
class UCustomizeItem;
class UDebugItem;
class UItemPrefab;

USTRUCT(BlueprintType)
struct POLARIS_API FItemPrefabDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemPrefab* ItemPrefabUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseItem* BaseItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseCharacterItem* BaseCharacterItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomizeItem* CustomizeItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDebugItem* DebugItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemPrefab* ItemPrefabTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseItem* BaseItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBaseCharacterItem* BaseCharacterItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomizeItem* CustomizeItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDebugItem* DebugItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispBaseItemDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispBaseCharacterItemDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispCustomizeItemDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDispDebugItemDetail;
    
    FItemPrefabDataStruct();
};

