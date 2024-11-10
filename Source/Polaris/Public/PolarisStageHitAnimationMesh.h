#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickAnimationSet.h"
#include "PolarisStageHitAnimationMesh.generated.h"

class ASkeletalMeshActor;
class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FPolarisStageHitAnimationMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AStaticMeshActor* DefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASkeletalMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPolarisStageGimmickAnimationSet> HitAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 HitAnimationNum;
    
    POLARIS_API FPolarisStageHitAnimationMesh();
};

