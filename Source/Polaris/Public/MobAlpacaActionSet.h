#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MobAlpacaActionStruct.h"
#include "MobAlpacaControlStruct.h"
#include "MobAlpacaActionSet.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class POLARIS_API UMobAlpacaActionSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMobAlpacaControlStruct Control;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMobAlpacaActionStruct Action1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMobAlpacaActionStruct Action2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TotalTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseDitherOff;
    
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
    
    UMobAlpacaActionSet();

};

