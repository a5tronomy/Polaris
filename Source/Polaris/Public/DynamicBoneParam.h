#pragma once
#include "CoreMinimal.h"
#include "DynamicBoneParam.generated.h"

USTRUCT(BlueprintType)
struct FDynamicBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString BoneName;
    
    UPROPERTY(EditAnywhere)
    float airResistance;
    
    UPROPERTY(EditAnywhere)
    float MinAngleLimitVertical;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleLimitVertical;
    
    UPROPERTY(EditAnywhere)
    float MinAngleLimitHorizon;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleLimitHorizon;
    
    UPROPERTY(EditAnywhere)
    float GoalStrength;
    
    UPROPERTY(EditAnywhere)
    float gravityScale;
    
    UPROPERTY(EditAnywhere)
    float fakeFrictionRateBust;
    
    UPROPERTY(EditAnywhere)
    float goalStrengthCoefBust;
    
    UPROPERTY(EditAnywhere)
    float horizontalVelocityLimit;
    
    UPROPERTY(EditAnywhere)
    float horizontalProneLimitMin;
    
    UPROPERTY(EditAnywhere)
    float horizontalProneLimitMax;
    
    UPROPERTY(EditAnywhere)
    float verticalProneLimitMin;
    
    UPROPERTY(EditAnywhere)
    float verticalProneLimitMax;
    
    POLARIS_API FDynamicBoneParam();
};

