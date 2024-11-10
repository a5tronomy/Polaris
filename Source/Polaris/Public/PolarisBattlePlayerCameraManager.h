#pragma once
#include "CoreMinimal.h"
#include "PolarisPlayerCameraManager.h"
#include "PolarisBattlePlayerCameraManager.generated.h"

UCLASS(NonTransient)
class POLARIS_API APolarisBattlePlayerCameraManager : public APolarisPlayerCameraManager {
    GENERATED_BODY()
public:
    APolarisBattlePlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

