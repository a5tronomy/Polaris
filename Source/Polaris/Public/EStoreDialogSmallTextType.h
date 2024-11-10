#pragma once
#include "CoreMinimal.h"
#include "EStoreDialogSmallTextType.generated.h"

UENUM()
enum class EStoreDialogSmallTextType : uint8 {
    E_Attention,
    E_Fail,
    E_Success,
};

