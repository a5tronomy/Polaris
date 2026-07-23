#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReimportBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class POLARIS_API UReimportBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReimportBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool Reimport(UObject* Asset, const FString& source_path);
    
    UFUNCTION(BlueprintCallable)
    static FString GetObjectJson(UObject* Object);
    
};

