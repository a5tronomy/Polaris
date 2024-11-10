#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "EFSR2DeDitherMode.h"
#include "EFSR2HistoryFormat.h"
#include "EFSR2LandscapeHISMMode.h"
#include "EFSR2QualityMode.h"
#include "FSR2Settings.generated.h"

UCLASS(Config=Engine)
class FSR2TEMPORALUPSCALING_API UFSR2Settings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool AutoExposure;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnabledInEditorViewport;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseSSRExperimentalDenoiser;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseNativeDX12;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseNativeVulkan;
    
    UPROPERTY(Config, EditAnywhere)
    EFSR2QualityMode QualityMode;
    
    UPROPERTY(Config, EditAnywhere)
    EFSR2HistoryFormat HistoryFormat;
    
    UPROPERTY(Config, EditAnywhere)
    EFSR2DeDitherMode DeDither;
    
    UPROPERTY(Config, EditAnywhere)
    float Sharpness;
    
    UPROPERTY(Config, EditAnywhere)
    bool AdjustMipBias;
    
    UPROPERTY(Config, EditAnywhere)
    bool ReactiveMask;
    
    UPROPERTY(Config, EditAnywhere)
    bool ForceVertexDeformationOutputsVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    EFSR2LandscapeHISMMode ForceLandscapeHISMMobility;
    
    UPROPERTY(Config, EditAnywhere)
    float ReflectionScale;
    
    UPROPERTY(Config, EditAnywhere)
    float ReflectionLuminanceBias;
    
    UPROPERTY(Config, EditAnywhere)
    float RoughnessScale;
    
    UPROPERTY(Config, EditAnywhere)
    float RoughnessBias;
    
    UPROPERTY(Config, EditAnywhere)
    float RoughnessMaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    bool ReactiveMaskRoughnessForceMaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float TranslucencyBias;
    
    UPROPERTY(Config, EditAnywhere)
    float TranslucencyLuminanceBias;
    
    UPROPERTY(Config, EditAnywhere)
    float TranslucencyMaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float PreDOFTranslucencyScale;
    
    UPROPERTY(Config, EditAnywhere)
    bool PreDOFTranslucencyMax;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EMaterialShadingModel> ReactiveShadingModelID;
    
    UPROPERTY(Config, EditAnywhere)
    float ForceReactiveMaterialValue;
    
    UPROPERTY(Config, EditAnywhere)
    float ReactiveHistoryTranslucencyBias;
    
    UPROPERTY(Config, EditAnywhere)
    float ReactiveHistoryTranslucencyLumaBias;
    
    UFSR2Settings();

};

