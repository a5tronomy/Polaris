#pragma once
#include "CoreMinimal.h"
#include "OnResponsedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnResponsed, bool, Succeeded, int32, Status);

