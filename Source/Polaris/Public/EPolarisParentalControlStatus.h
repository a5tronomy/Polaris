#pragma once
#include "CoreMinimal.h"
#include "EPolarisParentalControlStatus.generated.h"

UENUM()
enum class EPolarisParentalControlStatus : uint8 {
    Unknown,
    Ng,
    Ok,
};

