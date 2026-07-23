#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisDateTimeBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisDateTimeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisDateTimeBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsDstAtLocalTime(const FDateTime& DateTime);
    
    UFUNCTION(BlueprintCallable)
    static FString IndianToArabic(const FString& IndianNumber);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocalDateTimeFormat(bool HasYear);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFormatedLocalTimeSkeleton(const FDateTime& UtcDateTime);
    
    UFUNCTION(BlueprintCallable)
    static FText FormatRemainingTimeByUnit(const int32 remaining_sec);
    
};

