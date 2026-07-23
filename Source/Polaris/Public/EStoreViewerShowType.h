#pragma once
#include "CoreMinimal.h"
#include "EStoreViewerShowType.generated.h"

UENUM()
enum class EStoreViewerShowType : uint8 {
    None,
    TransformOnly,
    All,
};

