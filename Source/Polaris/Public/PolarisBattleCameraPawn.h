#pragma once
#include "CoreMinimal.h"
#include "PolarisPawn.h"
#include "PolarisBattleCameraPawn.generated.h"

class UBoxComponent;

UCLASS()
class POLARIS_API APolarisBattleCameraPawn : public APolarisPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
    APolarisBattleCameraPawn(const FObjectInitializer& ObjectInitializer);

};

