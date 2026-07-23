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
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseInterval;
    
    UPROPERTY(BlueprintReadWrite)
    float Timer;
    
    UPROPERTY(BlueprintReadWrite)
    float LIFE;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DelayImpluseMaxCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DelayImpluseInterval;
    
    APolarisRadialForceActor(const FObjectInitializer& ObjectInitializer);

};

