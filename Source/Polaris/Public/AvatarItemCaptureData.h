#pragma once
#include "CoreMinimal.h"
#include "AvatarItemData.h"
#include "EAvatarItemCaptureType.h"
#include "AvatarItemCaptureData.generated.h"

USTRUCT(BlueprintType)
struct FAvatarItemCaptureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString PrefabFileName;
    
    UPROPERTY(BlueprintReadWrite)
    EAvatarItemCaptureType CaptureType;
    
    UPROPERTY(BlueprintReadWrite)
    FAvatarItemData ItemData;
    
    POLARIS_API FAvatarItemCaptureData();
};

