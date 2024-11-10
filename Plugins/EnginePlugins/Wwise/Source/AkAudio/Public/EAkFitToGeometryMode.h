#pragma once
#include "CoreMinimal.h"
#include "EAkFitToGeometryMode.generated.h"

UENUM()
enum class EAkFitToGeometryMode {
    OrientedBox,
    AlignedBox,
    ConvexPolyhedron,
};

