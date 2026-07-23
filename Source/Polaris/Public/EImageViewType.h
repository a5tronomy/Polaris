#pragma once
#include "CoreMinimal.h"
#include "EImageViewType.generated.h"

UENUM()
enum class EImageViewType : uint8 {
    CharacterPanel,
    Ball,
    Stamp,
    Gallery,
    Thumbnail,
    Max,
};

