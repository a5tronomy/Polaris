#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGStoryCharaEpisodeListAnimType.generated.h"

UENUM()
enum class EPolarisUMGStoryCharaEpisodeListAnimType : uint8 {
    ANIM_CLICK,
    ANIM_HOVER,
    ANIM_NORMAL,
    ANIM_IN,
    ANIM_DEACTIVE,
    ANIM_DEACTIVE_HOVER,
};

