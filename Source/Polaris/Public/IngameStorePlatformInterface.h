#pragma once
#include "CoreMinimal.h"
#include "IngameStorePlatformDataAsset.h"
#include "IngameStorePlatformInterface.generated.h"

UCLASS()
class POLARIS_API UIngameStorePlatformInterface : public UIngameStorePlatformDataAsset {
    GENERATED_BODY()
public:
    UIngameStorePlatformInterface();

    UFUNCTION(BlueprintPure)
    UIngameStorePlatformDataAsset* GetItemDataAsset() const;
    
};

