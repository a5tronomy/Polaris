#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ContentHeaderData.h"
#include "ContentPanelData.h"
#include "ContentShowcaseData.h"
#include "IngameStorePlatformDataAsset.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UIngameStorePlatformDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FContentHeaderData> header_data_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FContentShowcaseData> showcase_data_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FContentPanelData> panel_data_map;
    
    UIngameStorePlatformDataAsset();

};

