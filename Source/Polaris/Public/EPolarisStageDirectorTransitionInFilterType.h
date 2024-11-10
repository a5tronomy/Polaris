#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageDirectorTransitionInFilterType.generated.h"

UENUM()
enum class EPolarisStageDirectorTransitionInFilterType : int32 {
    ByName,
    ByTag,
    OnInitialRoundStart,
    OnPracticeInitialRoundStart,
    OnRoundStart,
};

