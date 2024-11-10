#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AuraItem.h"
#include "AuraCharacterItem.generated.h"

class UDebugEffectItem;

UCLASS(BlueprintType)
class POLARIS_API UAuraCharacterItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isCommonItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAuraItem> AuraEffectItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDebugEffectItem* DebugEffectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isExclusive;
    
    UAuraCharacterItem();

};

