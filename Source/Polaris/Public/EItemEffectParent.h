#pragma once
#include "CoreMinimal.h"
#include "EItemEffectParent.generated.h"

UENUM()
enum class EItemEffectParent : uint8 {
    Item_Self,
    Player_Socket,
};

