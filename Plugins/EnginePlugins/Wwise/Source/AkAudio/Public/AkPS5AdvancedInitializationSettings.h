#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkPS5AdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseHardwareCodecLowLatencyMode;
    
    UPROPERTY(EditAnywhere)
    bool bVorbisHwAcceleration;
    
    UPROPERTY(EditAnywhere)
    bool bEnable3DAudioSync;
    
    UPROPERTY(EditAnywhere)
    uint32 uNumOperationsForHwMixing;
    
    UPROPERTY(EditAnywhere)
    bool bPlotQueueLevel;
    
    UPROPERTY(EditAnywhere)
    uint32 NumAudioOut2Ports;
    
    UPROPERTY(EditAnywhere)
    uint32 NumAudioOut2ObjectPorts;
    
    AKAUDIO_API FAkPS5AdvancedInitializationSettings();
};

