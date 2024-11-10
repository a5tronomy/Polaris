#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "WindSourceAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UWindSourceAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MinGustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float MaxGustAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindRandomSeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindSpeed_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindStrength_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirection_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirectionY_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindSpeed_ChangeTime_Max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindStrength_ChangeTime_Max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirection_ChangeTime_Max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirectionY_ChangeTime_Max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WindSpeed_RandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WindStrength_RandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WindDirection_RandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WindDirectionY_RandomRange;
    
    UPROPERTY(EditAnywhere)
    FVector2D WindSpeed_TargetTimeRange;
    
    UPROPERTY(EditAnywhere)
    FVector2D WindDirectionZ_TargetTimeRange;
    
    UPROPERTY(EditAnywhere)
    FVector2D WindDirectionY_TargetTimeRange;
    
    UPROPERTY(EditAnywhere)
    FVector2D WindStrength_TargetTimeRange;
    
    UWindSourceAsset();

};

