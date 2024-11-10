#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "PolarisUMGScrollBox.generated.h"

UCLASS()
class POLARIS_API UPolarisUMGScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPolarisUMGScrollBox();

    UFUNCTION(BlueprintPure)
    bool IsScrolling() const;
    
};

