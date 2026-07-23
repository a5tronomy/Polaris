#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LobbyTemplateMessageSubInfo.generated.h"

USTRUCT(BlueprintType)
struct FLobbyTemplateMessageSubInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SubMessageId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName textId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReleaseVersion;
    
    POLARIS_API FLobbyTemplateMessageSubInfo();
};

