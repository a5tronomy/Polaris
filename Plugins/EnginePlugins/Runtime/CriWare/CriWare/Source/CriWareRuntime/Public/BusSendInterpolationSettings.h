#pragma once
#include "CoreMinimal.h"
#include "BusSendInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct FBusSendInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DspBusSettingsID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString DspBusSettingsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BusId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString BusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BusSendLevelForInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BusSendLevelForOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Width;
    
    CRIWARERUNTIME_API FBusSendInterpolationSettings();
};

