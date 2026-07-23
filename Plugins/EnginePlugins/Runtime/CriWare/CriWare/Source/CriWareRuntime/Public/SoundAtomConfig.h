#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomCategoryInfoParam.h"
#include "SoundAtomConfig.generated.h"

UCLASS(BlueprintType)
class CRIWARERUNTIME_API USoundAtomConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AcfFilePath;
    
    USoundAtomConfig();

    UFUNCTION(BlueprintCallable)
    static TArray<FAtomCategoryInfoParam> GetCategoryInfoArray();
    
};

