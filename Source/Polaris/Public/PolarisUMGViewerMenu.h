#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGViewerMenu.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGViewerMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGViewerMenu();

    UFUNCTION(BlueprintImplementableEvent)
    int32 GetNextSceneIndex();
    
};

