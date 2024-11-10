#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyTreasureEvent.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyTreasureEvent : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnApi3100, int32, Result);
    
    ULobbyTreasureEvent();

    UFUNCTION(BlueprintPure)
    bool IsExist(const FString& eventId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCleard(const FString& eventId) const;
    
    UFUNCTION(BlueprintCallable)
    void Api3100(const FString& eventId, const TArray<int32>& unlockIndices, ULobbyTreasureEvent::FOnApi3100 OnApi3100);
    
};

