#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceHoudini.generated.h"

class UHoudiniPointCache;

UCLASS(EditInlineNew)
class HOUDININIAGARA_API UNiagaraDataInterfaceHoudini : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHoudiniPointCache* HoudiniPointCacheAsset;
    
    UNiagaraDataInterfaceHoudini();

};

