#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshMerge.h"
#include "SkeletalMeshMerge.h"
#include "SkeletalMeshMergeParams.generated.h"

class USkeletalMesh;
class USkeleton;

USTRUCT(BlueprintType)
struct POLARIS_API FSkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkelMeshMergeSectionMapping> MeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USkeletalMesh*> MeshesToMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StripTopLODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNeedsCpuAccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSkeletonBefore: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeleton* Skeleton;
    
    FSkeletalMeshMergeParams();
};

