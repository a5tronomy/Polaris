#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EAvatarPartType.h"
#include "ELobbyAvatarItemType.h"
#include "EStoreItemType.h"
#include "GS_StoreMenuType.h"
#include "RewardItemDesc.h"
#include "StoreItemBasicData.h"
#include "StoreTitleTextColorStruct.h"
#include "PolarisStoreItemDataIntermediate.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisStoreItemDataIntermediate : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, const TArray<FStoreItemBasicData>&, datas);
    
protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<FStoreItemBasicData> stamp_data_array;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FStoreItemBasicData> emote_data_array;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FStoreItemBasicData> party_effects_data_array;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FStoreItemBasicData> prof_chara_pose_data_array;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FStoreItemBasicData> prof_avatar_pose_data_array;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FStoreItemBasicData> prof_bg_data_array;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FStoreItemBasicData> set_pack_bundle_data_array;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEndLoadingStamp;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEndLoadingEmote;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEndLoadingPartyEffects;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEndLoadingProfileCharaPose;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEndLoadingProfileAvatorPose;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEndLoadingProfileBg;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsEndLoadingSetPackBundle;
    
public:
    UPolarisStoreItemDataIntermediate();

    UFUNCTION(BlueprintImplementableEvent)
    void LoadStampItemData(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadSetPackBundle(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadProfileCharaPose(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadProfileBg(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadProfileAvatorPose(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadPartyEffectsItemData(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadEmoteItemData(const TArray<FName>& item_ids);
    
    UFUNCTION(BlueprintImplementableEvent)
    FStoreTitleTextColorStruct GetCategoryTitleColor(GS_StoreMenuType Category);
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetCategoryIconTextID(EStoreItemType Type) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FLinearColor GetCategoryIconColor(EStoreItemType Type) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetAvatarPartTextIDFromType(EAvatarPartType part_type) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString GetAvatarPartTextID(int32 part_id) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool FindPickupTexturePath(const FName& icon_id, FString& thumbnail_path, FString& preview_path);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FindPickupCheckStatusData(const FName& pickup_id, bool& enabled_check, FName& item_id, bool& when_owned_enable_status);
    
    UFUNCTION(BlueprintImplementableEvent)
    ELobbyAvatarItemType ConvartAvatarPartIdToItemType(int32 part_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    FRewardItemDesc BuildRewardEXP(int32 exp_num);
    
    UFUNCTION(BlueprintImplementableEvent)
    FRewardItemDesc BuildRewardCoinData(int32 Num);
    
};

