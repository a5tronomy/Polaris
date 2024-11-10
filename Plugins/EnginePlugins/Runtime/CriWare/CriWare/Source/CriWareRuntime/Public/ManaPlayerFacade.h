#pragma once
#include "CoreMinimal.h"
#include "ManaPlayerFacade.generated.h"

class UManaComponent;

USTRUCT()
struct FManaPlayerFacade {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, Transient)
    UManaComponent* ManaComponent;
    
    CRIWARERUNTIME_API FManaPlayerFacade();
};

