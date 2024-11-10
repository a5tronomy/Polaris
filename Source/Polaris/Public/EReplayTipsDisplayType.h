#pragma once
#include "CoreMinimal.h"
#include "EReplayTipsDisplayType.generated.h"

UENUM()
enum class EReplayTipsDisplayType : uint8 {
    EReplayTipsDisplayType_None,
    EReplayTipsDisplayType_Combo,
    EReplayTipsDisplayType_Punish,
};

