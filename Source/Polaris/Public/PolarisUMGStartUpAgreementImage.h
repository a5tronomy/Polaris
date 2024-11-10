#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGStartUpAgreement.h"
#include "PolarisUMGStartUpAgreementImage.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGStartUpAgreementImage : public UPolarisUMGStartUpAgreement {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpAgreementImage();

    UFUNCTION(BlueprintImplementableEvent)
    void SetLanguage(int32 lang);
    
};

