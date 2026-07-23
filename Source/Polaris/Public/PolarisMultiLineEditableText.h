#pragma once
#include "CoreMinimal.h"
#include "Widgets/Text/ISlateEditableTextWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/MultiLineEditableText.h"
#include "PolarisMultiLineEditableText.generated.h"

UCLASS()
class POLARIS_API UPolarisMultiLineEditableText : public UMultiLineEditableText {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPolarisMultiLineEditableText();

};

