#pragma once
#include "CoreMinimal.h"
#include "EffectUserParameterIntPtr.h"
#include "KamuiHash.h"
#include "CharacterEffect.generated.h"

class UBlueprint;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FCharacterEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* Particle;
    
    UPROPERTY(EditAnywhere)
    UBlueprint* Blueprint;
    
    UPROPERTY(EditAnywhere)
    float LifeSpan;
    
    UPROPERTY(EditAnywhere)
    bool isAttachedCharacter;
    
    UPROPERTY(EditAnywhere)
    bool isSelfRotation;
    
    UPROPERTY(EditAnywhere)
    bool isDispUI;
    
    UPROPERTY(EditAnywhere)
    bool isGetAitePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isAutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isGetMesh;
    
    UPROPERTY()
    FKamuiHash ParticleAssetNameHash;
    
    UPROPERTY()
    FEffectUserParameterIntPtr UserParameterIntPtr;
    
    POLARIS_API FCharacterEffect();
};

