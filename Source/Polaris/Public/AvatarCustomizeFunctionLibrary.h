#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LobbyAvatarData_Struct.h"
#include "AvatarCustomizeFunctionLibrary.generated.h"

class UAvatarItemDataRepository;

UCLASS(BlueprintType)
class POLARIS_API UAvatarCustomizeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FStoreSaleItemIdsDelegate, const TArray<int32>&, fight_pass_item_ids, const TArray<int32>&, store_item_ids);
    
    UAvatarCustomizeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool Unlock(int32 unlock_id);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayedNewIcon(int32 unlock_id);
    
    UFUNCTION(BlueprintCallable)
    static void RequestStoreSaleItemIds(const UAvatarCustomizeFunctionLibrary::FStoreSaleItemIdsDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void RequestAvatarCustomizeQuit();
    
    UFUNCTION(BlueprintCallable)
    static FLobbyAvatarData_Struct RepairAvatarData(const FLobbyAvatarData_Struct& avatar_data_struct);
    
    UFUNCTION(BlueprintCallable)
    static bool PurchaseForMoney(int64 money);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidAvatarData(const FLobbyAvatarData_Struct& avatar_data_struct);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUnlocked(int32 unlock_id);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDisplayedNewIcon(int32 unlock_id);
    
    UFUNCTION(BlueprintCallable)
    static FString GetUnlockConditionMessage(int32 unlock_id);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetMainMenuIndexes();
    
    UFUNCTION(BlueprintCallable)
    static int64 GetFightMoney();
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetClothesSubMenuIndexes();
    
    UFUNCTION(BlueprintPure)
    static UAvatarItemDataRepository* GetAvatarItemDataRepository();
    
    UFUNCTION(BlueprintCallable)
    static FLobbyAvatarData_Struct CreateDefaultAvatarDataStruct(int32 slot_no);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPurchaseForMoney(int64 money);
    
};

