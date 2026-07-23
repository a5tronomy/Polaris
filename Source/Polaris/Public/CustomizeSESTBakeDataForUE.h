#pragma once
#include "CoreMinimal.h"
#include "SESTBakeData.h"
#include "CustomizeSESTBakeDataForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeSESTBakeDataForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSESTBakeData SESTBakeInfo;
    
    FCustomizeSESTBakeDataForUE();
};

