#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SESTDataSet_CS.h"
#include "CustomizeSet.generated.h"

class UAuraCharacterItem;
class UBaseEyeItem;
class UBaseMakeItem;
class UEffectCharacterItem;
class UItemPrefab;

UCLASS(BlueprintType)
class POLARIS_API UCustomizeSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UItemPrefab>> ItemPrefabSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UItemPrefab>> ItemPrefabAccSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UBaseMakeItem>> BaseMakeItemSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UBaseEyeItem> BaseEyeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UEffectCharacterItem> EffectCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAuraCharacterItem> AuraCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSESTDataSet_CS> SESTItemDataSetArray;
    
    UCustomizeSet();

};

