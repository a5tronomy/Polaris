#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELobbyArea.h"
#include "LobbyAreaComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API ULobbyAreaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULobbyAreaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    ELobbyArea GetArea() const;
    
};

