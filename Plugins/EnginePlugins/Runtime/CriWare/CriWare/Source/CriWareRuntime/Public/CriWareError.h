#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriWareErrorInfo.h"
#include "CriWareError.generated.h"

class UCriWareError;

UCLASS(BlueprintType, MinimalAPI)
class UCriWareError : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCriWareError, const FCriWareErrorInfo&, ErrorInfo);
    
    UPROPERTY(BlueprintAssignable)
    FOnCriWareError OnCriWareError;
    
    UCriWareError();

    UFUNCTION(BlueprintPure)
    static UCriWareError* GetCriWareError();
    
};

