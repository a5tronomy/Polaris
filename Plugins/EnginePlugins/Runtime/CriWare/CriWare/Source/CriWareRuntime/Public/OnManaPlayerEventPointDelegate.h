#pragma once
#include "CoreMinimal.h"
#include "ManaEventPointInfo.h"
#include "OnManaPlayerEventPointDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaPlayerEventPoint, FManaEventPointInfo, EventPointInfo);

