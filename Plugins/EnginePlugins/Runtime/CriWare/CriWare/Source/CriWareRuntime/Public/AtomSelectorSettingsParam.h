#pragma once
#include "CoreMinimal.h"
#include "AtomStringWithComment.h"
#include "AtomSelectorSettingsParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorSettingsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomStringWithComment> Labels;
    
    CRIWARERUNTIME_API FAtomSelectorSettingsParam();
};

