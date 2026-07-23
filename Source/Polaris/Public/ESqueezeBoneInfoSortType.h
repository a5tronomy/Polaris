#pragma once
#include "CoreMinimal.h"
#include "ESqueezeBoneInfoSortType.generated.h"

UENUM()
enum class ESqueezeBoneInfoSortType {
    SortNone,
    ReleaseVersion,
    TargetBCI,
    TargetBCI_ItemName,
    SqueezeBoneAsset,
};

