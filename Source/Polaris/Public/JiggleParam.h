#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JiggleParam.generated.h"

USTRUCT(BlueprintType)
struct FJiggleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool translateEnabled;
    
    UPROPERTY(EditAnywhere)
    bool rotateEnabled;
    
    UPROPERTY(EditAnywhere)
    bool scaleEnabled;
    
    UPROPERTY(EditAnywhere)
    float Envelope;
    
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    UPROPERTY(EditAnywhere)
    float Damping;
    
    UPROPERTY(EditAnywhere)
    FVector translateWeight;
    
    UPROPERTY(EditAnywhere)
    FVector rotateWeight;
    
    UPROPERTY(EditAnywhere)
    FVector scaleWeight;
    
    UPROPERTY(EditAnywhere)
    bool translateXLimit;
    
    UPROPERTY(EditAnywhere)
    float translateXMin;
    
    UPROPERTY(EditAnywhere)
    float translateXMax;
    
    UPROPERTY(EditAnywhere)
    bool translateYLimit;
    
    UPROPERTY(EditAnywhere)
    float translateYMin;
    
    UPROPERTY(EditAnywhere)
    float translateYMax;
    
    UPROPERTY(EditAnywhere)
    bool translateZLimit;
    
    UPROPERTY(EditAnywhere)
    float translateZMin;
    
    UPROPERTY(EditAnywhere)
    float translateZMax;
    
    UPROPERTY(EditAnywhere)
    bool rotateXLimit;
    
    UPROPERTY(EditAnywhere)
    float rotateXMin;
    
    UPROPERTY(EditAnywhere)
    float rotateXMax;
    
    UPROPERTY(EditAnywhere)
    bool rotateYLimit;
    
    UPROPERTY(EditAnywhere)
    float rotateYMin;
    
    UPROPERTY(EditAnywhere)
    float rotateYMax;
    
    UPROPERTY(EditAnywhere)
    bool rotateZLimit;
    
    UPROPERTY(EditAnywhere)
    float rotateZMin;
    
    UPROPERTY(EditAnywhere)
    float rotateZMax;
    
    UPROPERTY(EditAnywhere)
    bool scaleXLimit;
    
    UPROPERTY(EditAnywhere)
    float scaleXMin;
    
    UPROPERTY(EditAnywhere)
    float scaleXMax;
    
    UPROPERTY(EditAnywhere)
    bool scaleYLimit;
    
    UPROPERTY(EditAnywhere)
    float scaleYMin;
    
    UPROPERTY(EditAnywhere)
    float scaleYMax;
    
    UPROPERTY(EditAnywhere)
    bool scaleZLimit;
    
    UPROPERTY(EditAnywhere)
    float scaleZMin;
    
    UPROPERTY(EditAnywhere)
    float scaleZMax;
    
    POLARIS_API FJiggleParam();
};

