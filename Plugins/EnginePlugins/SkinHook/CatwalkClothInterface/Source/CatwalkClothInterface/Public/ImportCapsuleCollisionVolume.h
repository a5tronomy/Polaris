#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ImportCollisionVolume.h"
#include "ImportCapsuleCollisionVolume.generated.h"

USTRUCT(BlueprintType)
struct FImportCapsuleCollisionVolume : public FImportCollisionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D Radii;
    
    UPROPERTY(EditAnywhere)
    float Length;
    
    UPROPERTY(EditAnywhere)
    FVector Center;
    
    UPROPERTY(EditAnywhere)
    FQuat Rotation;
    
    CATWALKCLOTHINTERFACE_API FImportCapsuleCollisionVolume();
};

