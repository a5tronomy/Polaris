#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DramaLightParam.generated.h"

USTRUCT(BlueprintType)
struct FDramaLightParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool contact_shadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float contactshadow_intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float spec_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_actor_rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_actor_base_rot;
    
    POLARIS_API FDramaLightParam();
};

