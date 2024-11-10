#pragma once
#include "CoreMinimal.h"
#include "AvatarItemColorData.h"
#include "EAvatarItemGettingType.h"
#include "EAvatarItemRarityType.h"
#include "EAvatarItemTag.h"
#include "EAvatarPartType.h"
#include "ELobbyAvatarItemType.h"
#include "AvatarItemData.generated.h"

class UAvatarItemPrefab;
class UTexture2D;

USTRUCT(BlueprintType)
struct FAvatarItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyAvatarItemType item_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarPartType part_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAvatarItemPrefab> prefab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, TSoftObjectPtr<UAvatarItemPrefab>> replacement_prefabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAvatarItemColorData> color_datas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EAvatarItemTag> item_tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EAvatarPartType> exclusive_part_types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> exclusive_item_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EAvatarPartType> rev_exclusive_part_types;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> rev_exclusive_item_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarItemRarityType rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool contain_new_creation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 unlock_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarItemGettingType getting_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool hidden_when_locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool show_new_icon;
    
    POLARIS_API FAvatarItemData();
};

