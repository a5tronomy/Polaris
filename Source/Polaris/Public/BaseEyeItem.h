#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseEyeItemOneEye.h"
#include "BaseEyeItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UBaseEyeItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FBaseEyeItemOneEye> EyeParamArray;
    
    UBaseEyeItem();

};

