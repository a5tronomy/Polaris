#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "LobbyFootstepComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULobbyFootstepComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 _groundSurfaceType;
    
    UPROPERTY(BlueprintReadOnly)
    float _speed;
    
private:
    UPROPERTY()
    FVector _prevLocation;
    
    UPROPERTY()
    TArray<TEnumAsByte<EObjectTypeQuery>> _objectTypes;
    
    UPROPERTY()
    TArray<AActor*> _actorsToIgnore;
    
public:
    ULobbyFootstepComponent(const FObjectInitializer& ObjectInitializer);

};

