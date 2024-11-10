#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomAudioVolumeParameters.h"
#include "AtomAudioVolumeSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew, MinimalAPI)
class UAtomAudioVolumeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAtomAudioVolumeParameters AtomAudioVolumeParameters;
    
    UAtomAudioVolumeSettings();

};

