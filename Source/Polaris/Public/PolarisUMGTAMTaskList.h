#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTaskList.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGTAMTaskList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTaskList();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetText(FName Text);
    
};

