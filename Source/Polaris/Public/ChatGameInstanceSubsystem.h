#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ChatGameInstanceSubsystem.generated.h"

class ULobbyChatText;

UCLASS(BlueprintType)
class POLARIS_API UChatGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ULobbyChatText* m_TextChat;
    
public:
    UChatGameInstanceSubsystem();

    UFUNCTION(BlueprintPure)
    ULobbyChatText* GetTextChat();
    
};

