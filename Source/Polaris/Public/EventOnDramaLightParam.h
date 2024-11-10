#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DramaLightParam.h"
#include "EDramaLightOriginPositionType.h"
#include "EventOnDramaLightParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnDramaLightParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDramaLightOriginPositionType light_pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor main_light_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDramaLightParam> Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 start_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 end_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float contact_shadow_length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float attenuation_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float character_specular_spec_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float light_material_color_scale_r;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float light_material_color_scale_g;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float light_material_color_scale_b;
    
    POLARIS_API FEventOnDramaLightParam();
};

