#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDLSSPreset.h"
#include "DLSSSettings.generated.h"

UCLASS(Config=Engine)
class DLSS_API UDLSSSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSD3D12;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSD3D11;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSVulkan;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableDLSSInPlayInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowDLSSSDebugOnScreenMessages;
    
    UPROPERTY(Config, VisibleAnywhere)
    FString GenericDLSSBinaryPath;
    
    UPROPERTY(Config, VisibleAnywhere)
    bool bGenericDLSSBinaryExists;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint32 NVIDIANGXApplicationId;
    
    UPROPERTY(AdvancedDisplay, Config, VisibleAnywhere)
    FString CustomDLSSBinaryPath;
    
    UPROPERTY(AdvancedDisplay, Config, VisibleAnywhere)
    bool bCustomDLSSBinaryExists;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAllowOTAUpdate;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    EDLSSPreset DLAAPreset;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    EDLSSPreset DLSSQualityPreset;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    EDLSSPreset DLSSBalancedPreset;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    EDLSSPreset DLSSPerformancePreset;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    EDLSSPreset DLSSUltraPerformancePreset;
    
    UDLSSSettings();

};

