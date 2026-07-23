#pragma once
#include "CoreMinimal.h"
#include "EStoreItemAttribute.generated.h"

UENUM()
enum class EStoreItemAttribute {
    None,
    PickupItem,
    PopularItem,
    SaleItem,
    FreeItem,
    NewItem,
    General0,
    General1,
    General2,
    General3,
    General4,
    General5,
    General6,
    General7,
    General8,
    TimeSaleInStore,
    TimeSale,
};

