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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageChangePhysicalMaterial")
    UPhysicalMaterial* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageChangePhysicalMaterial")
    TArray<UPhysicalMaterial*> BreakLevelMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageChangePhysicalMaterial")
    TArray<AStaticMeshActor*> TargetStaticMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "StageChangePhysicalMaterial")
    TArray<ASkeletalMeshActor*> TargetSkeletalMeshActor;
    
    POLARIS_API FPolarisStageChangePhysicalMaterial();
};

