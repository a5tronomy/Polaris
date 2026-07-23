#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothComponentStruct.h"
#include "CatwalkClothComponentSetStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCatwalkClothComponentSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCatwalkClothComponentStruct> CatwalkClothComponents;
    
    FCatwalkClothComponentSetStruct();
};

