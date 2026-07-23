#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "Templates/SubclassOf.h"
#include "IngameStoreMode.generated.h"

class APolarisDramaManager;
class APolarisEffectManager;
class UPolarisStoreItemDataIntermediate;

UCLASS(NonTransient)
class POLARIS_API AIngameStoreMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    UPolarisStoreItemDataIntermediate* item_data_intermediate_store;
    
    UPROPERTY(BlueprintReadWrite)
    UPolarisStoreItemDataIntermediate* item_data_intermediate_blackpen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisEffectManager> EffectManagerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<APolarisDramaManager> DramaManagerClass;
    
public:
    AIngameStoreMode(const FObjectInitializer& ObjectInitializer);

};

