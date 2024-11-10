#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlackPenGameInstanceSubsystem.generated.h"

class UBlackPenData;

UCLASS()
class POLARIS_API UBlackPenGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBlackPenData* m_data;
    
    UBlackPenGameInstanceSubsystem();

};

