#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELoungeBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UELoungeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELoungeBlueprintFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static bool HasClosedLounge(const FString& EndTime);
    
    UFUNCTION(BlueprintPure)
    static FString GetRemainingTimespanLocalizedText(const FString& EndTime, bool is_black);
    
    UFUNCTION(BlueprintPure)
    static FTimespan GetRemainingTimespan(const FString& EndTime);
    
};

