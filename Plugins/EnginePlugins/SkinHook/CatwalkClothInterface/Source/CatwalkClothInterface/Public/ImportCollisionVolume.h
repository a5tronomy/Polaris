#pragma once
#include "CoreMinimal.h"
#include "ImportCollisionVolume.generated.h"

USTRUCT()
struct FImportCollisionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FString BoneName;
    
    UPROPERTY(EditAnywhere)
    bool bCollidesWithVirtualParticles;
    
    CATWALKCLOTHINTERFACE_API FImportCollisionVolume();
};

