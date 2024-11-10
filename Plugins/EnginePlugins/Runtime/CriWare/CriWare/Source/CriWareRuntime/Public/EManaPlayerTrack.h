#pragma once
#include "CoreMinimal.h"
#include "EManaPlayerTrack.generated.h"

UENUM()
enum class EManaPlayerTrack : uint8 {
    Audio,
    SubAudio,
    ExtraAudio,
    EventPoint,
    Subtitle,
    Video,
    Alpha,
};

