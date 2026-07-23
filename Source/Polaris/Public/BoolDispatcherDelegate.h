#pragma once
#include "CoreMinimal.h"
#include "BoolDispatcherDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolDispatcher, bool, bFlag);

