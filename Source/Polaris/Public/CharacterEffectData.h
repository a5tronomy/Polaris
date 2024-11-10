#pragma once
#include "CoreMinimal.h"
#include "EffectUserParameterInt.h"
#include "CharacterEffectData.generated.h"

class UBlueprint;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FCharacterEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* ParticleAsset;
    
    UPROPERTY(EditAnywhere)
    UBlueprint* BluePrintAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlueprintLifeSpan;
    
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
    
    POLARIS_API FCharacterEffectData();
};

