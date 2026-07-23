#include "DebugDataTableBlueprintLibrary.h"

UDebugDataTableBlueprintLibrary::UDebugDataTableBlueprintLibrary() {
}

void UDebugDataTableBlueprintLibrary::SetStringValue(UDataTable* DataTable, int32 Index, const FString& PropertyName, const FString& Value) {
}

void UDebugDataTableBlueprintLibrary::RemoveRow(UDataTable* DataTable, const FName& RowName) {
}

FString UDebugDataTableBlueprintLibrary::GetTableAsJSON(UDataTable* DataTable) {
    return TEXT("");
}

FString UDebugDataTableBlueprintLibrary::GetTableAsCSV(UDataTable* DataTable) {
    return TEXT("");
}

void UDebugDataTableBlueprintLibrary::CopyDataTable(UDataTable* sourceDataTable, UDataTable* targetDataTable) {
}


