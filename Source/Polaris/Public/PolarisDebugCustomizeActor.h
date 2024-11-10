#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BaseEyeItemDataStruct.h"
#include "BaseMakeItemDataStruct.h"
#include "BaseSESTItemDataStruct.h"
#include "ItemPrefabDataStruct.h"
#include "Templates/SubclassOf.h"
#include "PolarisDebugCustomizeActor.generated.h"

class APolarisCharacterActor;
class UAuraCharacterItem;
class UCustomizeSet;
class UEffectCharacterItem;
class UPolarisCharacterAnimInstance;
class USkeleton;

UCLASS()
class POLARIS_API APolarisDebugCustomizeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isUseInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isRefreshRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isBakeEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isBodyPrpEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isSqueezeEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAbilityOffsetEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isEnableSweatRealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isDynamicBoneEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isDemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isOnlyLaunchItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isKeepItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FItemPrefabDataStruct> ItemPrefabSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FItemPrefabDataStruct> ItemPrefabAccSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FBaseMakeItemDataStruct> BaseMakeItemSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBaseEyeItemDataStruct BaseEyeItemSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UEffectCharacterItem> EffectCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAuraCharacterItem> AuraCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FBaseSESTItemDataStruct> BaseSESTItemSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    APolarisCharacterActor* MyPolarisCharacterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSuntan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isDevilSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 sweatRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 wetRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 dirtyRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DirtColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor SkinTintColorOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCustomizeSet* targetCustomizeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 createCustomizeSetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString createCustomizeSetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString createCustomizeSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString createCustomizeSetDebugItemPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString createCustomizeSetDebugItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPolarisCharacterAnimInstance> UseDemoAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeleton* UseDemoSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APolarisCharacterActor> UseCharacterClassDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAutoLoadSkeletonAssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CharacterActorCount;
    
    APolarisDebugCustomizeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMyPolarisCharacterActor();
    
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
    UFUNCTION(BlueprintCallable)
    void RefreshCharacter(bool isForce);
    
};

