#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LobbyChatSubMenuDataAsset.generated.h"

class ULobbyChatSubMenuEvent;

UCLASS(BlueprintType)
class POLARIS_API ULobbyChatSubMenuDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FName textId;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    ULobbyChatSubMenuEvent* ClickedEvent;
    
public:
    ULobbyChatSubMenuDataAsset();

    UFUNCTION(BlueprintPure)
    FName GetTextID() const;
    
    UFUNCTION(BlueprintPure)
    ULobbyChatSubMenuEvent* GetClickedEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExecuteClickedEvent() const;
    
};

