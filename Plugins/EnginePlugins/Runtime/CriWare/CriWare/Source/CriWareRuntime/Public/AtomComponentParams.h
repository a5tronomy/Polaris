#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtomAisacControlParam.h"
#include "AtomSelectorParam.h"
#include "EAtomLoopSetting.h"
#include "AtomComponentParams.generated.h"

class UAtomSoundObject;
class USoundAttenuation;

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomComponentParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultPitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableMultipleSoundPlayback: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUsePlaylist: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanStraddleAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAreaSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAtomSoundObject* SoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultBlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAtomAisacControlParam> DefaultAisacControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAtomSelectorParam> DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAtomLoopSetting LoopSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rotation;
    
    FAtomComponentParams();
};

