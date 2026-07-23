#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGTextMenu.h"
#include "PolarisUMGMessageChecker.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGMessageChecker : public UPolarisUMGTextMenu {
    GENERATED_BODY()
public:
    UPolarisUMGMessageChecker();

protected:
    UFUNCTION(BlueprintCallable)
    void InitMessageKeys(TArray<FString> Keys);
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetCurrentMessageKeys() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateCurrentMessageKeys(const FString& regex, bool is_sort);
    
};

