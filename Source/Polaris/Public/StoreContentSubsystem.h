#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StoreContentSubsystem.generated.h"

class UIngameStorePlatformInterface;

UCLASS()
class POLARIS_API UStoreContentSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UIngameStorePlatformInterface* m_data;
    
    UStoreContentSubsystem();

};

