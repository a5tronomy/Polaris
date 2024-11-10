#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkXSXAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 MaximumNumberOfXMAVoices;
    
    UPROPERTY(EditAnywhere)
    bool UseHardwareCodecLowLatencyMode;
    
    UPROPERTY(EditAnywhere)
    uint16 MaximumNumberOfOpusVoices;
    
    UPROPERTY(EditAnywhere)
    uint32 uMaxSystemAudioObjects;
    
    AKAUDIO_API FAkXSXAdvancedInitializationSettings();
};

