#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELobbyArea.h"
#include "LobbyAreaVolume.generated.h"

UCLASS()
class POLARIS_API ALobbyAreaVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELobbyArea Area;
    
    ALobbyAreaVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetAreaDistance(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintPure)
    ELobbyArea GetArea() const;
    
};

