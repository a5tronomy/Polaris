#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELobbyTemplateMessageSubCategory.h"
#include "LobbyTemplateMessageSubCategoryInfo.h"
#include "LobbyTemplateMessageSubCategoryDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API ULobbyTemplateMessageSubCategoryDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ELobbyTemplateMessageSubCategory, FLobbyTemplateMessageSubCategoryInfo> SubCategoryMap;
    
    ULobbyTemplateMessageSubCategoryDataAsset();

};

