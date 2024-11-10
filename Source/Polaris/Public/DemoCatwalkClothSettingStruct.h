#pragma once
#include "CoreMinimal.h"
#include "DemoCatwalkClothSettingStruct.generated.h"

class UCatwalkClothComponent;
class UCatwalkClothOverride;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoCatwalkClothSettingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCatwalkClothComponent* CatwalkClothComp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UCatwalkClothOverride* ClothOverrideSetting;
    
    FDemoCatwalkClothSettingStruct();
};

