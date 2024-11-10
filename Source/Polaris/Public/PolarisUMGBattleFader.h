#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBattleFader.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGBattleFader : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBattleFader();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateColor(FLinearColor new_color);
    
};

