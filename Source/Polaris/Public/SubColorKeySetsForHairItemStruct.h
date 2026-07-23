#pragma once
#include "CoreMinimal.h"
#include "SubColorKeySetsForHairItemStruct.generated.h"

class UCustomizeItem;
class USubColorKeySetsGroup;

USTRUCT(BlueprintType)
struct POLARIS_API FSubColorKeySetsForHairItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCustomizeItem> TargetCI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USubColorKeySetsGroup* SubColorKeySetsGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReleaseVersion;
    
    FSubColorKeySetsForHairItemStruct();
};

