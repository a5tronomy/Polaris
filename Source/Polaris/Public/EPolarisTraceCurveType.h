#pragma once
#include "CoreMinimal.h"
#include "EPolarisTraceCurveType.generated.h"

UENUM()
enum class EPolarisTraceCurveType {
    ETC_Spline,
    EFB_BSpline,
    ENUM_MAX UMETA(Hidden),
};

