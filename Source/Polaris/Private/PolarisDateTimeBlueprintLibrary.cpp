#include "PolarisDateTimeBlueprintLibrary.h"

UPolarisDateTimeBlueprintLibrary::UPolarisDateTimeBlueprintLibrary() {
}

bool UPolarisDateTimeBlueprintLibrary::IsDstAtLocalTime(const FDateTime& DateTime) {
    return false;
}

FString UPolarisDateTimeBlueprintLibrary::IndianToArabic(const FString& IndianNumber) {
    return TEXT("");
}

FString UPolarisDateTimeBlueprintLibrary::GetLocalDateTimeFormat(bool HasYear) {
    return TEXT("");
}

FString UPolarisDateTimeBlueprintLibrary::GetFormatedLocalTimeSkeleton(const FDateTime& UtcDateTime) {
    return TEXT("");
}

FText UPolarisDateTimeBlueprintLibrary::FormatRemainingTimeByUnit(const int32 remaining_sec) {
    return FText::GetEmpty();
}


