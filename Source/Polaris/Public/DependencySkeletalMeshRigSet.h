#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClothCollision.h"
#include "DynamicBoneDataStruct.h"
#include "SkeletalMeshRigSet.h"
#include "DependencySkeletalMeshRigSet.generated.h"

class UCatwalkClothCollisionAsset;
class UCatwalkClothLcjOverrideAsset;
class UClothOverrideCollisionDataAsset;
class UClothOverrideLcjDataAsset;
class UGFurAsset;
class UParentConstraintBinary;
class UPhoenixSkeletonBinary;
class UStaticMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FDependencySkeletalMeshRigSet : public FSkeletalMeshRigSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCatwalkClothCollisionAsset* CatwalkClothCollisionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FClothCollision> CatwalkClothCollisionVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClothOverrideCollisionDataAsset* CatwalkClothCollisionOverrideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClothOverrideCollisionDataAsset* CatwalkClothCollisionAttachmentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCatwalkClothLcjOverrideAsset* CatwalkClothLcjOverrideAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UClothOverrideLcjDataAsset* CatwalkClothLcjOverrideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDynamicBoneDataStruct> PhoenixDynamicBoneBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UParentConstraintBinary*> ParentConstraintBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName VariationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGFurAsset*> GFurAssetItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> SourceStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInitializeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAlwaysLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsUseSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSelfConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemConstraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableAbilityItemHandOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AbilityItemConstraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform AbilityItemOffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsShadowMesh;
    
    FDependencySkeletalMeshRigSet();
};

