#pragma once
#include "CoreMinimal.h"
#include "EAvatarColorType.h"
#include "EAvatarMaterialParameterType.h"
#include "EAvatarPartType.h"
#include "AvatarItemColorData.generated.h"

USTRUCT(BlueprintType)
struct FAvatarItemColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarColorType color_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarMaterialParameterType material_parameter_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 color_palette_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarPartType focus_part_type;
    
    POLARIS_API FAvatarItemColorData();
};

