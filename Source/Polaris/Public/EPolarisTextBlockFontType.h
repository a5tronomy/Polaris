#pragma once
#include "CoreMinimal.h"
#include "EPolarisTextBlockFontType.generated.h"

UENUM()
enum class EPolarisTextBlockFontType : uint8 {
    Normal,
    Headline,
    ID,
    Subheadline,
    Title,
    Subtitle,
    Telop,
};

