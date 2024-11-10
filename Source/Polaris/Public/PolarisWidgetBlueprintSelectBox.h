#pragma once
#include "CoreMinimal.h"
#include "Components/NativeWidgetHost.h"
#include "PolarisWidgetBlueprintSelectedDelegate.h"
#include "PolarisWidgetBlueprintSelectBox.generated.h"

UCLASS()
class POLARIS_API UPolarisWidgetBlueprintSelectBox : public UNativeWidgetHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolarisWidgetBlueprintSelected OnSelected;
    
    UPolarisWidgetBlueprintSelectBox();

};

