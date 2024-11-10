#pragma once
#include "CoreMinimal.h"
#include "EAtomAudioVolumeType.generated.h"

UENUM()
enum class EAtomAudioVolumeType : uint8 {
    UseSnapshot,
    UseBus,
    UseAisacControl,
    UseEntranceVolume,
    Num,
};

