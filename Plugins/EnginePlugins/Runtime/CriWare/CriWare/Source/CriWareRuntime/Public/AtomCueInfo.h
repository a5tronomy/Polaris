#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtomAttenuationDistanceParam.h"
#include "AtomCueInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomCueInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool HeaderVisibility;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FTimespan Duration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString UserData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FString> CategoryNames;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FString> AisacControlNames;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FAtomAttenuationDistanceParam AttenuationDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bLooping: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 bIsParameterPalletAssigned: 1;
    
    FAtomCueInfo();
};

