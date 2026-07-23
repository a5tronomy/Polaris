#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "PolarisMultiLineEditableText.h"
#include "LobbyChatMultiLineEditableText.generated.h"

UCLASS()
class ULobbyChatMultiLineEditableText : public UPolarisMultiLineEditableText {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMultiLineEditableTextKeyDownEvent, const FGeometry&, MyGeometry, const FKeyEvent&, InKeyEvent);

    UPROPERTY(BlueprintAssignable)
    FOnMultiLineEditableTextKeyDownEvent OnKeyDown;

    ULobbyChatMultiLineEditableText();

};

