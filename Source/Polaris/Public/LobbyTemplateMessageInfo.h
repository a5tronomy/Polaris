#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELobbyTemplateMessageCategory.h"
#include "ELobbyTemplateMessageSubCategory.h"
#include "LobbyTemplateMessageInfo.generated.h"

USTRUCT(BlueprintType)
struct FLobbyTemplateMessageInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MessageId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName textId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELobbyTemplateMessageCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELobbyTemplateMessageCategory Category2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELobbyTemplateMessageCategory Category3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELobbyTemplateMessageSubCategory SubCategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ReleaseVersion;
    
    POLARIS_API FLobbyTemplateMessageInfo();
};

