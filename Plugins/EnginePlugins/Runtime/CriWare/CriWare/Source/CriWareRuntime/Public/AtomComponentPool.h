#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomComponentPool.generated.h"

class UAtomComponent;

UCLASS(MinimalAPI)
class UAtomComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UAtomComponent*> Pool;
    
public:
    UAtomComponentPool();

};

