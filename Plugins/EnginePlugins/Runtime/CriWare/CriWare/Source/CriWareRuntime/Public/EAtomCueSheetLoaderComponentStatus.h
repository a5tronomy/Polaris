#pragma once
#include "CoreMinimal.h"
#include "EAtomCueSheetLoaderComponentStatus.generated.h"

UENUM()
enum class EAtomCueSheetLoaderComponentStatus : uint8 {
    Stop,
    Loading,
    LoadEnd,
    Serializing,
    SerializeEnd,
    Binding,
    BindEnd,
    LoadCueSheet,
    Complete,
    Error,
};

