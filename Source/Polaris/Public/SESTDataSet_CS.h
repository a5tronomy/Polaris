#pragma once
#include "CoreMinimal.h"
#include "SESTBakeData.h"
#include "SESTDataSet_CS.generated.h"

class UBaseSESTItem;

USTRUCT(BlueprintType)
struct POLARIS_API FSESTDataSet_CS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UBaseSESTItem> SESTItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSESTBakeData SESTBakeData;
    
    FSESTDataSet_CS();
};

