#pragma once
#include "CoreMinimal.h"
#include "MobAlpacaActionStruct.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FMobAlpacaActionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Tooltip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TotalTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseDitherOff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseFinishRespawn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DitherOffStartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* Offset_X;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* Offset_Y;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* Offset_Z;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* Rotation_X;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* Rotation_Y;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* Rotation_Z;
    
    POLARIS_API FMobAlpacaActionStruct();
};

