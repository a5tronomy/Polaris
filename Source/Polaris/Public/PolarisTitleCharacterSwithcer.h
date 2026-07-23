#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisTitleCharacterSwithcer.generated.h"

class UPrimaryDataAsset;

UCLASS()
class POLARIS_API APolarisTitleCharacterSwithcer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPrimaryDataAsset* MenuPrimaryDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DefaultFighterId;
    
    APolarisTitleCharacterSwithcer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupData();
    
};

