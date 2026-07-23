#pragma once
#include "CoreMinimal.h"
#include "EAvatarItemInvalidFlags.h"
#include "EAvatarPartType.h"
#include "AvatarItemInvalidData.generated.h"

USTRUCT(BlueprintType)
struct FAvatarItemInvalidData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 item_id;
    
    UPROPERTY(BlueprintReadOnly)
    FString prefab_name;
    
    UPROPERTY(BlueprintReadOnly)
    int32 release_version;
    
    UPROPERTY(BlueprintReadOnly)
    EAvatarItemInvalidFlags Flags;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FString> not_match_exculusive_item_ids_parameters;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<EAvatarPartType> not_match_exculusive_part_types_parameters;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<EAvatarPartType> not_enough_full_body_exclusive_parameters;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> duplicate_color_slot_parameters;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FString> not_enough_head_replace_prefab_parameters;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FString> not_enough_exclusive_item_ids_parameters;
    
    POLARIS_API FAvatarItemInvalidData();
};

