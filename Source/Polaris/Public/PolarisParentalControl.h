#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPolarisParentalControlStatus.h"
#include "EPolarisParentalControlType.h"
#include "PolarisParentalControl.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisParentalControl : public UObject {
    GENERATED_BODY()
public:
    UPolarisParentalControl();

    UFUNCTION(BlueprintPure)
    EPolarisParentalControlStatus GetStatusNoMultiplayCheck(EPolarisParentalControlType InType) const;
    
    UFUNCTION(BlueprintPure)
    EPolarisParentalControlStatus GetStatus(EPolarisParentalControlType InType) const;
    
};

