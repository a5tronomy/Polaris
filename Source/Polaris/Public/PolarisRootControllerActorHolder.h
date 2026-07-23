#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisRootControllerActorHolder.generated.h"

class AActor;

USTRUCT()
struct FPolarisRootControllerActorHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* Actor;
    
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    POLARIS_API FPolarisRootControllerActorHolder();
};

