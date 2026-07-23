#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "CharacterDataAssetReSaveCommandlet.generated.h"

UCLASS(NonTransient)
class POLARIS_API UCharacterDataAssetReSaveCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UCharacterDataAssetReSaveCommandlet();

};

