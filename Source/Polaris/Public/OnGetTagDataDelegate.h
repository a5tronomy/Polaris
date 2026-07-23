#pragma once
#include "CoreMinimal.h"
#include "TagData.h"
#include "OnGetTagDataDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnGetTagData, bool, Succeeded, int32, Status, FTagData, TagData);

