#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshMerge.h"
#include "SkeletalMeshMerge.h"
#include "LobbySkeletalMeshMergeParams.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct POLARIS_API FLobbySkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkelMeshMergeSectionMapping> MeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StripTopLODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNeedsCpuAccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSkeletonBefore: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeleton* Skeleton;
    
    FLobbySkeletalMeshMergeParams();
};

