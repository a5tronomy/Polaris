#pragma once
#include "CoreMinimal.h"
#include "UserListDataArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FUserListDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, FString> userListDataStrings;
    
    FUserListDataArray();
};

