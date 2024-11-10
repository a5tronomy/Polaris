#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseSESTItem.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class POLARIS_API UBaseSESTItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SESTParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SESTTexture;
    
    UBaseSESTItem();

};

