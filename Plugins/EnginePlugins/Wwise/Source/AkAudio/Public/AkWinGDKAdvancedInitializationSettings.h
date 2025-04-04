#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkWinGDKAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseHeadMountedDisplayAudioDevice;
    
    UPROPERTY(EditAnywhere)
    uint32 uMaxSystemAudioObjects;
    
    AKAUDIO_API FAkWinGDKAdvancedInitializationSettings();
};

