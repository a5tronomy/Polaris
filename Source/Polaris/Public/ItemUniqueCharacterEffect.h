#pragma once
#include "CoreMinimal.h"
#include "EffectUserParameterInt.h"
#include "ItemUniqueCharacterEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FItemUniqueCharacterEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* UniqueharacterEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EffectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAttachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isSelfRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isDispUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isGetAitePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isGetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEffectUserParameterInt UserParameterInt;
    
    FItemUniqueCharacterEffect();
};

