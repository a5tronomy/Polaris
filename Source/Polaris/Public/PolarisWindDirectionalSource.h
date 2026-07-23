#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/WindDirectionalSource.h"
#include "PolarisWindDirectionalSource.generated.h"

class AActor;
class UWindSourceAsset;

UCLASS()
class POLARIS_API APolarisWindDirectionalSource : public AWindDirectionalSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    bool bEdit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float BaseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float BaseStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    FRotator BaseDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    bool bUseSequencer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    int32 Seed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float BaseDirection_Y;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    float BaseDirection_Z;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWindSourceAsset* WindSourceAsset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Interp)
    bool bUseRandom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseModerateRandom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindSpeed_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindStrength_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirection_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirectionY_ChangeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindSpeed_ChangeTimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindStrength_ChangeTimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirection_ChangeTimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindDirectionY_ChangeTimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WindSpeed_RandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WindStrength_RandomRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D WindDirectionZ_RandomRange;
    
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
    
    UPROPERTY(EditAnywhere)
    AActor* LinkObject;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Z_IsUpeer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Y_IsUpeer;
    
    APolarisWindDirectionalSource(const FObjectInitializer& ObjectInitializer);

};

