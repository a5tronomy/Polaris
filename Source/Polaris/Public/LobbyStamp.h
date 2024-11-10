#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyStampInfo.h"
#include "LobbyStamp.generated.h"

class UDataTable;
class ULobbyStamp;

UCLASS(BlueprintType)
class POLARIS_API ULobbyStamp : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UDataTable* _dataTable;
    
    UPROPERTY()
    TMap<FName, FLobbyStampInfo> _map;
    
public:
    ULobbyStamp();

    UFUNCTION(BlueprintPure)
    static ULobbyStamp* LobbyStampData();
    
    UFUNCTION(BlueprintCallable)
    void GetStampIndices(TArray<FName>& Result);
    
    UFUNCTION(BlueprintCallable)
    bool GetInfo(const FName& Index, FLobbyStampInfo& Info);
    
};

