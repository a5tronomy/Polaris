#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyInput.h"
#include "LobbyInputObject.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyInputObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FLobbyInput _struct;
    
    ULobbyInputObject();

};

