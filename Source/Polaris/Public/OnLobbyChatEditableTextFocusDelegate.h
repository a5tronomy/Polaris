#pragma once
#include "CoreMinimal.h"
#include "ELobbyFocusCause.h"
#include "OnLobbyChatEditableTextFocusDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyChatEditableTextFocus, const ELobbyFocusCause&, InFocusEvent);

