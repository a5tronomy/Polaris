#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterEffectData.h"
#include "PolarisCharacterEffectDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UPolarisCharacterEffectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<int32, FCharacterEffectData> CharacterEffect;
    
    UPolarisCharacterEffectDataAsset();

};

