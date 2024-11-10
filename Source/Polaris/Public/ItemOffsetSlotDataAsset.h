#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemOffsetSlotDataStruct.h"
#include "ItemOffsetSlotDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UItemOffsetSlotDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FItemOffsetSlotDataStruct> ItemOffsetSlotDataArray;
    
    UItemOffsetSlotDataAsset();

    UFUNCTION(BlueprintPure)
    FItemOffsetSlotDataStruct GetItemOffsetSlotData(const FString& _ItemOffsetSlotName) const;
    
};

