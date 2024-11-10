#pragma once
#include "CoreMinimal.h"
#include "ECriFsLoaderStatus.generated.h"

UENUM()
enum class ECriFsLoaderStatus : uint8 {
    Stop,
    Loading,
    Complete,
    Error,
};

