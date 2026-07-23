#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyInput.h"
#include "LobbyInputActor.generated.h"

class ALobbyInputActor;

UCLASS()
class POLARIS_API ALobbyInputActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool _isRightMouseButton;
    
    UPROPERTY(BlueprintReadOnly)
    FLobbyInput _input;
    
    ALobbyInputActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginPause();
    
    UFUNCTION(BlueprintCallable)
    static ALobbyInputActor* LobbyGetInputActor2();
    
    UFUNCTION(BlueprintCallable)
    static AActor* LobbyGetInputActor();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsEnableInput();
    
};

