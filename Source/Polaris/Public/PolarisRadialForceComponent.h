#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisDelayImpulseRequest.h"
#include "PolarisRadialForceComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisRadialForceComponent : public URadialForceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStageImpulseStrengthType ImpulseStrengthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TargetMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCheckCulling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CheckFrontVector;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DelayImpluseMaxCount;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DelayImpluseFrame;
    
    UPROPERTY(BlueprintReadWrite)
    int32 DelayImpluseInterval;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FPolarisDelayImpulseRequest> DelayImpulseQueue;
    
    UPolarisRadialForceComponent(const FObjectInitializer& ObjectInitializer);

};

