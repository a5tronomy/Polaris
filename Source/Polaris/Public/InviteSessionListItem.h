#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InviteSessionInfo.h"
#include "InviteSessionListItem.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UInviteSessionListItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FInviteSessionInfo Data;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Index;
    
    UInviteSessionListItem();

};

