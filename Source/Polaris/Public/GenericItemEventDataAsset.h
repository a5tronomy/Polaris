#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GenericItemEventAnimationInfoStruct.h"
#include "GenericItemEventDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UGenericItemEventDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGenericItemEventAnimationInfoStruct> EventDatas;
    
    UGenericItemEventDataAsset();

};

