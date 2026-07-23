#pragma once
#include "CoreMinimal.h"
#include "ResourceData.h"
#include "OnGetResourceDatasDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnGetResourceDatas, bool, Succeeded, int32, Status, const TArray<FResourceData>&, resourceDatas);

