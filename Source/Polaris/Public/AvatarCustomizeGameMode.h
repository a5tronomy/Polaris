#pragma once
#include "CoreMinimal.h"
#include "LobbyGameMode.h"
#include "AvatarCustomizeGameMode.generated.h"

class AAvatarCustomizeEventDispatcher;
class AAvatarCustomizeGameController;

UCLASS(NonTransient)
class POLARIS_API AAvatarCustomizeGameMode : public ALobbyGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AAvatarCustomizeGameController> GameController;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<AAvatarCustomizeEventDispatcher> EventDispatcher;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsTutorial;
    
    UPROPERTY(BlueprintReadWrite)
    bool TransitedFromMainMenu;
    
    AAvatarCustomizeGameMode(const FObjectInitializer& ObjectInitializer);

};

