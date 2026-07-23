#pragma once
#include "CoreMinimal.h"
#include "EAtomProfileSortType.generated.h"

UENUM()
enum class EAtomProfileSortType : uint8 {
    AtomComponentID,
    Distance,
    Name,
    Time,
};

