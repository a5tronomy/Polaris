#pragma once
#include "CoreMinimal.h"
#include "EMeshBodyRegionType.h"
#include "CatwalkClothComponentStruct.generated.h"

class UCatwalkClothComponentBase;

USTRUCT(BlueprintType)
struct POLARIS_API FCatwalkClothComponentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCatwalkClothComponentBase* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDisableSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMeshBodyRegionType BodyRegionType;
    
    FCatwalkClothComponentStruct();
};

