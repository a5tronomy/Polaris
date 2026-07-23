#pragma once
#include "CoreMinimal.h"
#include "PolarisStageChangePhysicalMaterial.generated.h"

class ASkeletalMeshActor;
class AStaticMeshActor;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FPolarisStageChangePhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalMaterial* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPhysicalMaterial*> BreakLevelMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AStaticMeshActor*> TargetStaticMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ASkeletalMeshActor*> TargetSkeletalMeshActor;
    
    POLARIS_API FPolarisStageChangePhysicalMaterial();
};

