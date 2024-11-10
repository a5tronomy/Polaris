#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EPolarisTracePartsId.h"
#include "PolarisTracePartsSetting.h"
#include "PolarisTracePartsDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisTracePartsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ExpItemName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPolarisTracePartsId TracePartsId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FirstEffectPartsId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FirstSocketOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SecondEffectPartsId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector SecondSocketOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPolarisTracePartsSetting> PartsSettingTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bOverrideEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bLifeStop;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxKeyFrameNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Brightness;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor BaseColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float KeyFrameStopFrame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BrightnessFrame;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RefractionFrame;
    
    UPolarisTracePartsDataAsset();

};

