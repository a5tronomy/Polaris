#include "ELoungeBlueprintFunctionLibrary.h"

UELoungeBlueprintFunctionLibrary::UELoungeBlueprintFunctionLibrary() {
}

bool UELoungeBlueprintFunctionLibrary::HasClosedLounge(const FString& EndTime) {
    return false;
}

FString UELoungeBlueprintFunctionLibrary::GetRemainingTimespanLocalizedText(const FString& EndTime, bool is_black) {
    return TEXT("");
}

FTimespan UELoungeBlueprintFunctionLibrary::GetRemainingTimespan(const FString& EndTime) {
    return FTimespan{};
}


