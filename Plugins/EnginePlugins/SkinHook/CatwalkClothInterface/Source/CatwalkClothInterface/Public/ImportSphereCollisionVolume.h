#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImportCollisionVolume.h"
#include "ImportSphereCollisionVolume.generated.h"

USTRUCT(BlueprintType)
struct FImportSphereCollisionVolume : public FImportCollisionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    CATWALKCLOTHINTERFACE_API FImportSphereCollisionVolume();
};

