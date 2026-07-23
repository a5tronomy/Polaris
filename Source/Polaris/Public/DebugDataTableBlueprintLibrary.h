#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugDataTableBlueprintLibrary.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class POLARIS_API UDebugDataTableBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDebugDataTableBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetStringValue(UDataTable* DataTable, int32 Index, const FString& PropertyName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveRow(UDataTable* DataTable, const FName& RowName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTableAsJSON(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static FString GetTableAsCSV(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static void CopyDataTable(UDataTable* sourceDataTable, UDataTable* targetDataTable);
    
};

