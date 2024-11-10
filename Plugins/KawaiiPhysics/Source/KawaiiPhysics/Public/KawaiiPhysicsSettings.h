#pragma once
#include "CoreMinimal.h"
#include "KawaiiPhysicsSettings.generated.h"

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorldDampingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorldDampingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LimitAngle;
    
    FKawaiiPhysicsSettings();
};

