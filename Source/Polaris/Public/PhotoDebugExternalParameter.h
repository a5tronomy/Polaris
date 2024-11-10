#pragma once
#include "CoreMinimal.h"
#include "PhotoDebugExternalParameter.generated.h"

USTRUCT(BlueprintType)
struct FPhotoDebugExternalParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float target_angle_max_x;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float target_angle_max_z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float free_angle_max_x;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float free_angle_max_z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensFlare_BokehSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LensFlare_Threshold;
    
    POLARIS_API FPhotoDebugExternalParameter();
};

