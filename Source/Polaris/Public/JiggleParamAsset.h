#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JiggleParam.h"
#include "JiggleParamAsset.generated.h"

UCLASS()
class POLARIS_API UJiggleParamAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FString, FJiggleParam> JiggleParamArray;
    
    UJiggleParamAsset();

};

