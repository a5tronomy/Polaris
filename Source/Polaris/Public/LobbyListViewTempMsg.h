#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "LobbyListViewTempMsg.generated.h"

class UObject;

UCLASS()
class POLARIS_API ULobbyListViewTempMsg : public UListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ListSize;
    
    ULobbyListViewTempMsg();

    UFUNCTION(BlueprintCallable)
    void AddTop(UObject* InItem);
    
};

