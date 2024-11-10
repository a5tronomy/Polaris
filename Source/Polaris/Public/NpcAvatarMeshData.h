#pragma once
#include "CoreMinimal.h"
#include "AvararItemStaticMeshData.h"
#include "NpcAvatarMaterialData.h"
#include "NpcAvatarMeshData.generated.h"

class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FNpcAvatarMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAvararItemStaticMeshData> staticMeshDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FNpcAvatarMaterialData> materialDatas;
    
    POLARIS_API FNpcAvatarMeshData();
};

