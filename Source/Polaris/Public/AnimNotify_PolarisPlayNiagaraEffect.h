#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "AnimNotify_PolarisPlayNiagaraEffect.generated.h"

class UMaterialInstance;

UCLASS(CollapseCategories)
class POLARIS_API UAnimNotify_PolarisPlayNiagaraEffect : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UMaterialInstance* DecalMaterialAsset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector DecalSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector DecalOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DecalLifeTime;
    
    UAnimNotify_PolarisPlayNiagaraEffect();

};

