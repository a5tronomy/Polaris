#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "LobbyPawnPhotoCamera.generated.h"

class UCameraComponent;

UCLASS()
class POLARIS_API ALobbyPawnPhotoCamera : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCameraComponent* camera_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform FirstTransform;
    
    ALobbyPawnPhotoCamera(const FObjectInitializer& ObjectInitializer);

};

