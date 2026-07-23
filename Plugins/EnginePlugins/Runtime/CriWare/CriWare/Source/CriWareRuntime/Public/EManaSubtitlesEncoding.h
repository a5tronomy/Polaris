#pragma once
#include "CoreMinimal.h"
#include "EManaSubtitlesEncoding.generated.h"

UENUM()
enum class EManaSubtitlesEncoding : uint8 {
    Default,
    ANSI,
    Utf8,
    Utf16,
};

