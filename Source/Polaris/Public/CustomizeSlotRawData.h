#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizeItemDataACForUE.h"
#include "CustomizeItemDataCIForUE.h"
#include "CustomizeItemDataEYForUE.h"
#include "CustomizeItemDataIDForUE.h"
#include "CustomizeItemDataMKForUE.h"
#include "CustomizeSESTBakeDataForUE.h"
#include "CustomizeSlotRawData.generated.h"

UCLASS(BlueprintType)
class POLARIS_API UCustomizeSlotRawData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FCustomizeItemDataCIForUE> CustomizeItemDataCIParamMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FCustomizeItemDataACForUE> CustomizeItemDataACParamMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FCustomizeItemDataMKForUE> CustomizeItemDataMKParamMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FCustomizeItemDataEYForUE> CustomizeItemDataEYParamMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FCustomizeItemDataIDForUE> CustomizeItemDataIDParamMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FCustomizeSESTBakeDataForUE> CustomizeSESTBakeDataParamMap;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 DataVersion;
    
    UCustomizeSlotRawData();

    UFUNCTION()
    void ConvertToCustomizeData();
    
};

