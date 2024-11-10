#pragma once
#include "CoreMinimal.h"
#include "EWwiseGroupType.h"
#include "WwiseGroupValueCookedData.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseGroupValueCookedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    EWwiseGroupType Type;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 groupId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    int32 ID;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FName DebugName;
    
    FWwiseGroupValueCookedData();
};

FORCEINLINE uint32 GetTypeHash(const FWwiseGroupValueCookedData& Data)
{
    return FCrc::MemCrc32(&Data, sizeof(FWwiseGroupValueCookedData));
}

