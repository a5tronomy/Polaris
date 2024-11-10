#pragma once
#include "CoreMinimal.h"
#include "AisacControlInterpolationSettings.h"
#include "BusSendInterpolationSettings.h"
#include "SnapshotSwitchSettings.h"
#include "AtomAudioVolumeParameters.generated.h"

USTRUCT(BlueprintType)
struct FAtomAudioVolumeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseSnapshotSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseBusSendSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAisacControlSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxDistanceForEntranceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSwitchIntepolationInsideForBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSwitchIntepolationInsideForAisac;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSnapshotSwitchSettings> SnapshotSwitchSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FBusSendInterpolationSettings> BusSendInterpolateSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAisacControlInterpolationSettings> AisacControlInterpolateSettings;
    
    CRIWARERUNTIME_API FAtomAudioVolumeParameters();
};

