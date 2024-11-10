#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "OnLobbyChatEditableTextFocusSlateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyChatEditableTextFocusSlate, const FFocusEvent&, InFocusEvent);

