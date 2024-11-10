#pragma once
#include "CoreMinimal.h"
#include "ESubColorKeySetsFurItemInfoSortType.generated.h"

UENUM()
enum class ESubColorKeySetsFurItemInfoSortType {
    SortNone,
    ReleaseVersion,
    TargetMaterial,
    TargetMaterial_ItemName,
    SubColorKeySetsGroup,
    SubColorKeySetsGroup_ItemName,
};

