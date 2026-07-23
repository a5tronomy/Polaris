#pragma once
#include "CoreMinimal.h"
#include "GS_StoreMenuType.generated.h"

UENUM()
enum class GS_StoreMenuType : uint8 {
    Home,
    PFTab,
    CharaItem,
    AvatarItem,
    OtherItem,
    CurrencyStore,
    BlackPen,
    ItemDetails,
    HomePickUp,
    SelectItemType,
    ItemList,
    PlyCusMenu,
    PrfCusMenu,
    SelectedItem,
    BlackPenPremium,
    BlackPenLevel,
    BlackPenMission,
    BlackPenDetails,
    MenuNum,
};

