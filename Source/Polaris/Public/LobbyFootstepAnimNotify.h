#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ELobbyFootstepType.h"
#include "LobbyFootstepAnimNotify.generated.h"

UCLASS(CollapseCategories)
class POLARIS_API ULobbyFootstepAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELobbyFootstepType _type;
    
    ULobbyFootstepAnimNotify();

};

