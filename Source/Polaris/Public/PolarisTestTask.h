#pragma once
#include "CoreMinimal.h"
#include "PolarisTestTaskArg.h"
#include "Templates/SubclassOf.h"
#include "PolarisTestTask.generated.h"

class UPolarisTestInterface;

USTRUCT(BlueprintType)
struct FPolarisTestTask {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UPolarisTestInterface> Class;
    
    UPROPERTY(EditAnywhere)
    FPolarisTestTaskArg Argument;
    
    UPROPERTY(EditAnywhere)
    FString Note;
    
    POLARIS_API FPolarisTestTask();
};

