#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AvatarItemGameInstanceSubsystem.generated.h"

class UAvatarItemDataRepository;

UCLASS(BlueprintType)
class POLARIS_API UAvatarItemGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UAvatarItemDataRepository* item_data_repository;
    
    UAvatarItemGameInstanceSubsystem();

};

