#pragma once
#include "CoreMinimal.h"
#include "LobbyTemplateMessageSubInfo.h"
#include "LobbyTemplateMessageSubCategoryInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FLobbyTemplateMessageSubCategoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName textId;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FLobbyTemplateMessageSubInfo> SubMeesageInfoMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReleaseVersion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* DataTable;
    
    POLARIS_API FLobbyTemplateMessageSubCategoryInfo();
};

