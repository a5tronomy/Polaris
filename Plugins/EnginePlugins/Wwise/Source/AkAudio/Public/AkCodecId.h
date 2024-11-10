#pragma once
#include "CoreMinimal.h"
#include "AkCodecId.generated.h"

UENUM()
enum class AkCodecId : uint8 {
    None,
    PCM,
    ADPCM,
    XMA,
    Vorbis,
    ATRAC9 = 12,
    OpusNX = 17,
    AkOpus = 19,
    AkOpusWEM,
};

