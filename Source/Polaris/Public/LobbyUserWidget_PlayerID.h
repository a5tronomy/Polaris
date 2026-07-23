#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "LobbyUserWidget_PlayerID.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API ULobbyUserWidget_PlayerID : public ULobbyUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFisrtFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ServerPlayerName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsFatalError;
    
    ULobbyUserWidget_PlayerID();

    UFUNCTION(BlueprintCallable)
    void SetMyPlayerName(const FString& playerName);
    
};

