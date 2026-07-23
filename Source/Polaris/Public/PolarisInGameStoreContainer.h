#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGIngameStoreDispBase.h"
#include "PolarisInGameStoreContainer.generated.h"

class UWidget;

UCLASS(EditInlineNew)
class POLARIS_API UPolarisInGameStoreContainer : public UPolarisUMGIngameStoreDispBase {
    GENERATED_BODY()
public:
    UPolarisInGameStoreContainer();

    UFUNCTION(BlueprintImplementableEvent)
    TArray<UWidget*> GetAllChildren();
    
};

