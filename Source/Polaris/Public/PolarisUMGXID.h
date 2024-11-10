#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGXID.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGXID : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGXID();

    UFUNCTION(BlueprintImplementableEvent)
    void SetXID(const FString& raw_text);
    
};

