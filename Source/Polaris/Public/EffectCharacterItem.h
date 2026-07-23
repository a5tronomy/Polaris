#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterEffect.h"
#include "EffectCharacterItem.generated.h"

class UDebugEffectItem;

UCLASS(BlueprintType)
class POLARIS_API UEffectCharacterItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isCommonItem;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TMap<int32, FCharacterEffect> CharacterEffectItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDebugEffectItem* DebugEffectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExtraAbilityId;
    
    UEffectCharacterItem();

};

