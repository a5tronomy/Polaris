#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AtomAsrRackConfig.h"
#include "AtomAsrRackConfigUI.h"
#include "EAtomSoundRendererType.h"
#include "CriWarePluginSettings.generated.h"

UCLASS(Config=Engine)
class CRIWARERUNTIME_API UCriWarePluginSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Config, VisibleDefaultsOnly)
    bool bNoExistCriWareIni;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bEditableCriWareAdxLipSyncSetting;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath NonAssetContentDir;
    
    UPROPERTY(Config)
    FString ContentDir;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumBinders;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxBinds;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumLoaders;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxPath;
    
    UPROPERTY(Config, EditAnywhere)
    bool OutputsLogFileSystem;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_FileAccessThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_DataDecompressionThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_MemoryFileSystemThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_FileAccessThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_DataDecompressionThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_MemoryFileSystemThreadPriority;
    
    UPROPERTY()
    bool AutomaticallyCreateCueAsset;
    
    UPROPERTY(Config, EditAnywhere)
    bool UsesInGamePreview;
    
    UPROPERTY(Config, EditAnywhere)
    bool OutputsLogAtom;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath AwbRootDirectory;
    
    UPROPERTY(Config)
    FString AwbRoot;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MonitorCommunicationBufferSize;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxPitch;
    
    UPROPERTY(Config, EditAnywhere)
    int32 AsrOutputChannels;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxVirtualVoices;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumStandardMemoryVoices;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardMemoryVoiceNumChannels;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardMemoryVoiceSamplingRate;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumStandardStreamingVoices;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardStreamingVoiceNumChannels;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardStreamingVoiceSamplingRate;
    
    UPROPERTY(Config)
    bool PoolAtomComponent;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath AtomConfig;
    
    UPROPERTY(Config)
    FString AcfFileName;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath AtomConfigDataTable;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath AtomOutputPortDataTable;
    
    UPROPERTY(Config, EditAnywhere)
    float DistanceFactor;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAtomSoundRendererType::Type> SoundRendererTypeUI;
    
    UPROPERTY(Config)
    int32 SoundRendererType;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtomAsrRackConfigUI> AsrRackConfigUI;
    
    UPROPERTY(Config)
    TArray<FAtomAsrRackConfig> AsrRackConfig;
    
    UPROPERTY(Config)
    FString Hardware1;
    
    UPROPERTY(Config)
    FString Hardware2;
    
    UPROPERTY(Config)
    FString Hardware3;
    
    UPROPERTY(Config)
    FString Hardware4;
    
    UPROPERTY(Config, EditAnywhere)
    float EconomicTickMarginDistance;
    
    UPROPERTY(Config, EditAnywhere)
    int32 EconomicTickFrequency;
    
    UPROPERTY(Config, EditAnywhere)
    float CullingMarginDistance;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 HcaMxVoiceSamplingRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 NumHcaMxMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 HcaMxMemoryVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 NumHcaMxStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 HcaMxStreamingVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool WASAPI_IsExclusive;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 WASAPI_BitsPerSample;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 WASAPI_SamplingRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 WASAPI_NumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool UseUnrealSoundRenderer;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool SmartPhone_UseSonicSYNC;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_ServerThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_OutputThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_ServerThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_OutputThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool PS4_UseAudio3d;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_NumberOfAudio3dMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_SamplingRateOfAudio3dMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_NumberOfAudio3dStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_SamplingRateOfAudio3dStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 Switch_NumOpusMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 Switch_OpusMemoryVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 Switch_OpusMemoryVoiceSamplingRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 Switch_NumOpusStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 Switch_OpusStreamingVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 Switch_OpusStreamingVoiceSamplingRate;
    
    UPROPERTY(Config, EditAnywhere)
    bool InitializeMana;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableDecodeSkip;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxDecoderHandles;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxManaBPS;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxManaStreams;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseH264Decoder;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseDecoderOutputBuffers;
    
    UPROPERTY(Config, EditAnywhere)
    bool ForceSoftwareDecodingOnXboxOne;
    
    UPROPERTY(Config, EditAnywhere)
    bool ForceSoftwareDecodingOnXboxSeries;
    
    UPROPERTY(Config, EditAnywhere)
    bool InitializeAdxLipSync;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxNumAnalyzerHandles;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bUseManaStartupMovies;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bWaitForMoviesToComplete;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bMoviesAreSkippable;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    TArray<FString> StartupMovies;
    
    UCriWarePluginSettings();

};

