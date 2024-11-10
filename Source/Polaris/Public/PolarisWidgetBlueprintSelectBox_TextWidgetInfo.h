#pragma once
#include "CoreMinimal.h"
#include "PolarisWidgetBlueprintSelectBox_TextWidgetInfo.generated.h"

USTRUCT(BlueprintType)
struct FPolarisWidgetBlueprintSelectBox_TextWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString m_wbp_name;
    
    UPROPERTY(BlueprintReadWrite)
    FString m_name;
    
    UPROPERTY(BlueprintReadWrite)
    FString m_namespace;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_is_from_string_table;
    
    UPROPERTY(BlueprintReadWrite)
    FString m_string_table_name;
    
    UPROPERTY(BlueprintReadWrite)
    FString m_string_table_key;
    
    UPROPERTY(BlueprintReadWrite)
    FString m_text;
    
    POLARIS_API FPolarisWidgetBlueprintSelectBox_TextWidgetInfo();
};

