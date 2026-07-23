#include "ReimportBlueprintLibrary.h"

UReimportBlueprintLibrary::UReimportBlueprintLibrary() {
}

bool UReimportBlueprintLibrary::Reimport(UObject* Asset, const FString& source_path) {
    return false;
}

FString UReimportBlueprintLibrary::GetObjectJson(UObject* Object) {
    return TEXT("");
}


