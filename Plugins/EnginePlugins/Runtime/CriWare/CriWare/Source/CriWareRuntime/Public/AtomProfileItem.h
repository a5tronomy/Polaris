#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtomProfileItem.generated.h"

USTRUCT(BlueprintType)
struct FAtomProfileItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AtomComponentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString AtomCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AtomComponentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceFromListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int64 PlayedNumSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ConcurrencyName;
    
    CRIWARERUNTIME_API FAtomProfileItem();
};

