#pragma once
#include "CoreMinimal.h"
#include "ECriFsBinderStatus.generated.h"

UENUM()
enum class ECriFsBinderStatus : uint8 {
    Stop,
    Binding,
    Complete,
    Error,
};

