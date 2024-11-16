#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/RigidBodyBase.h"
#include "PolarisRadialForceActor.generated.h"

class UPolarisRadialForceComponent;
class UWindDirectionalSourceComponent;

UCLASS()
class POLARIS_API APolarisRadialForceActor : public ARigidBodyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisRadialForceComponent* ForceComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UWindDirectionalSourceComponent* WindDirectionalSourceComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RadialForce")
    bool IsWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RadialForce")
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RadialForce")
    float StartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RadialForce")
    float EndRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RadialForce")
    float ImpulseInterval;
    
    UPROPERTY(BlueprintReadWrite, Category = "RadialForce")
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, Category = "RadialForce")
    float LIFE;
    
    UPROPERTY(BlueprintReadWrite, Category = "RadialForce")
    int32 DelayImpluseMaxCount;
    
    UPROPERTY(BlueprintReadWrite, Category = "RadialForce")
    int32 DelayImpluseInterval;
    
    APolarisRadialForceActor(const FObjectInitializer& ObjectInitializer);

};

