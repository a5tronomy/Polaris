#pragma once
#include "CoreMinimal.h"
#include "OnTimerUpdateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimerUpdateDelegate, int32, remainingSeconds);

