#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BoolDispatcherDelegate.h"
#include "LobbyDevelopmentGISubsystem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyDevelopmentGISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBoolDispatcher OnChangedAgeingAutoPlayFlag;
    
    ULobbyDevelopmentGISubsystem();

    UFUNCTION(BlueprintCallable)
    void SetAgeingAutoPlay(const bool Ageing);
    
    UFUNCTION(BlueprintPure)
    bool IsAgeingAutoPlay() const;
    
};

