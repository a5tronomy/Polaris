#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlackPenGameInstanceSubsystem.generated.h"

class UBlackPenData;

UCLASS(BlueprintType)
class POLARIS_API UBlackPenGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBlackPenData* m_data;
    
    UBlackPenGameInstanceSubsystem();

    UFUNCTION(BlueprintPure)
    int32 GetRoundNum() const;
    
};

