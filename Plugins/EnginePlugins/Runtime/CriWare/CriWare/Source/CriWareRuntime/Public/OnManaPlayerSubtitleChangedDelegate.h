#pragma once
#include "CoreMinimal.h"
#include "OnManaPlayerSubtitleChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnManaPlayerSubtitleChanged, FText, Subtitle);

