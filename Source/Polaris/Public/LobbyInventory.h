#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyInventoryData.h"
#include "LobbyInventory.generated.h"

class ULobbyInventory;

UCLASS(BlueprintType)
class POLARIS_API ULobbyInventory : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FLobbyDownloadInventory, bool, isSuccess);
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FLobbyInventoryData> _items;
    
    ULobbyInventory();

    UFUNCTION(BlueprintCallable)
    void Test2500();
    
    UFUNCTION(BlueprintPure)
    static ULobbyInventory* LobbyInventory();
    
    UFUNCTION(BlueprintPure)
    bool IsExistItem(const FName& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void GetCategoryItems(TArray<FName>& Result, const FName& Category);
    
    UFUNCTION(BlueprintCallable)
    void DownloadInventory(ULobbyInventory::FLobbyDownloadInventory OnDownloadInventory);
    
};

