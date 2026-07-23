#pragma once
#include "CoreMinimal.h"
#include "EAvataColorPaletteType.h"
#include "EAvatarColorType.h"
#include "EAvatarMaterialParameterType.h"
#include "EAvatarPartType.h"
#include "AvatarItemPrefabColorData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FAvatarItemPrefabColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarColorType colorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarMaterialParameterType materialParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvataColorPaletteType colorPaletteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool specifyFocusPartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAvatarPartType focusPartType;
    
    FAvatarItemPrefabColorData();
};

