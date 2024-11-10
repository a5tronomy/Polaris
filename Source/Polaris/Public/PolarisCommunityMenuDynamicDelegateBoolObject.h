#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisCommunityMenuDynamicDelegateBoolObject.generated.h"

UCLASS()
class POLARIS_API UPolarisCommunityMenuDynamicDelegateBoolObject : public UObject {
    GENERATED_BODY()
public:
    UPolarisCommunityMenuDynamicDelegateBoolObject();

    UFUNCTION()
    void Callback(bool Result);
    
};

