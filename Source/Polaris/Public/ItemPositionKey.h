#pragma once
#include "CoreMinimal.h"
#include "ItemPositionKey.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FItemPositionKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 AccessoryNumber;
    
    FItemPositionKey();
};
FORCEINLINE uint32 GetTypeHash(const FItemPositionKey) { return 0; }

