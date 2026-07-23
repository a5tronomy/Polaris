#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "PolarisGroundResetPoint.generated.h"

UCLASS()
class POLARIS_API APolarisGroundResetPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    APolarisGroundResetPoint(const FObjectInitializer& ObjectInitializer);

};

