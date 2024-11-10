#pragma once
#include "CoreMinimal.h"
#include "UPolarisUMGStoreButton.generated.h"

class UPolarisUMGStoreButton;

USTRUCT(BlueprintType)
struct POLARIS_API FUPolarisUMGStoreButton {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UPolarisUMGStoreButton*> StoreButton;
    
    FUPolarisUMGStoreButton();
};

