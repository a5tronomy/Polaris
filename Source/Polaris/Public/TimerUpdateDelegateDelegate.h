#pragma once
#include "CoreMinimal.h"
#include "TimerUpdateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FTimerUpdateDelegate, int32, remainingSeconds);

