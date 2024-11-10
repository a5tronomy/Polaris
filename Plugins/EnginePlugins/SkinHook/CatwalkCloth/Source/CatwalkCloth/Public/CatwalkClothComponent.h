#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothComponentBase.h"
#include "CatwalkClothComponent.generated.h"

class UCatwalkClothOverride;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CATWALKCLOTH_API UCatwalkClothComponent : public UCatwalkClothComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UCatwalkClothOverride* ClothOverride;
    
    UCatwalkClothComponent(const FObjectInitializer& ObjectInitializer);

};

