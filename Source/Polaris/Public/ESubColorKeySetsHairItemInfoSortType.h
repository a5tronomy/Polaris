#pragma once
#include "CoreMinimal.h"
#include "ESubColorKeySetsHairItemInfoSortType.generated.h"

UENUM()
enum class ESubColorKeySetsHairItemInfoSortType {
    SortNone,
    ReleaseVersion,
    TargetCI,
    TargetCI_ItemName,
    SubColorKeySetsGroup,
    SubColorKeySetsGroup_ItemName,
};

