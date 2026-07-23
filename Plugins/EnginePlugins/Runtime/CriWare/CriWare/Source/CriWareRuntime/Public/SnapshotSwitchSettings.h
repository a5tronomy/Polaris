#pragma once
#include "CoreMinimal.h"
#include "SnapshotSwitchSettings.generated.h"

USTRUCT(BlueprintType)
struct FSnapshotSwitchSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AsrRackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DspBusSettingsID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString DspBusSettingsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SnapshotID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SnapshotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeTime;
    
    CRIWARERUNTIME_API FSnapshotSwitchSettings();
};

