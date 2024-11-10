#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AvararItemPrefabReplaceData.h"
#include "AvararItemStaticMeshData.h"
#include "AvatarItemPrefabColorData.h"
#include "AvatarItemPrefab.generated.h"

class UMaterialInstance;
class USkeletalMesh;
class UStaticMesh;

UCLASS(BlueprintType)
class POLARIS_API UAvatarItemPrefab : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAvararItemStaticMeshData> staticMeshDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UMaterialInstance*> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAvararItemPrefabReplaceData> replaceDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool autoReplaceForHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool autoReplaceForBeard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAvatarItemPrefabColorData> colorDatas;
    
    UAvatarItemPrefab();

    UFUNCTION(BlueprintPure)
    bool CanOverride() const;
    
};

