#pragma once
#include "CoreMinimal.h"
#include "PolarisDebugThumbnailAccModeMeshConfig.generated.h"

class UMeshComponent;
class USceneComponent;

USTRUCT()
struct FPolarisDebugThumbnailAccModeMeshConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USceneComponent* OldParentComponent;
    
    UPROPERTY(Instanced)
    UMeshComponent* TargetMesh;
    
    POLARIS_API FPolarisDebugThumbnailAccModeMeshConfig();
};

