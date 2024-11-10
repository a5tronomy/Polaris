#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisStageLightController.generated.h"

UCLASS()
class POLARIS_API APolarisStageLightController : public AActor {
    GENERATED_BODY()
public:
    APolarisStageLightController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    TArray<FSoftObjectPath> GetLevels();
    
};

