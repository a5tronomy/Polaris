#pragma once
#include "CoreMinimal.h"
#include "AkChannelConfiguration.h"
#include "PanningRule.h"
#include "AkOutputSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkOutputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AudioDeviceShareSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 IdDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    PanningRule PanRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AkChannelConfiguration ChannelConfig;
    
    AKAUDIO_API FAkOutputSettings();
};

