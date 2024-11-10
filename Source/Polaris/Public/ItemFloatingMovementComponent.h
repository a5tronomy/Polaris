#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ItemFloatingMovementComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UItemFloatingMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform TargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableMoveInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChaseRatioPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationChaseRatioPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableRotateInterpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRotateDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRotateDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLockRotatorYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLockRotatorPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLockRotatorRoll;
    
    UItemFloatingMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Chase(float DeltaTime);
    
};

