#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KamuiManager.generated.h"

class UPolarisAutoTest;

UCLASS()
class POLARIS_API UKamuiManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPolarisAutoTest* AutoTest;
    
public:
    UKamuiManager();

};

