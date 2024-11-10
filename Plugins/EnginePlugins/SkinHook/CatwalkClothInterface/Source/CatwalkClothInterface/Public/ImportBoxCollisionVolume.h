#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ImportCollisionVolume.h"
#include "ImportBoxCollisionVolume.generated.h"

USTRUCT(BlueprintType)
struct FImportBoxCollisionVolume : public FImportCollisionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Extents;
    
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    FQuat Rotation;
    
    CATWALKCLOTHINTERFACE_API FImportBoxCollisionVolume();
};

