#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AtomAisacControlSettingsParam.h"
#include "AtomCategoryParam.h"
#include "AtomDspBusSettingsParam.h"
#include "AtomGameVariableParam.h"
#include "AtomGlobalAisacSettingsParam.h"
#include "AtomSelectorSettingsParam.h"
#include "AtomStringWithComment.h"
#include "AtomConfigDataTable.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomConfigDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString BuildDate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumCategoriesPerPlayback;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumCategories;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumAisacControls;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumGlobalAisacs;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumVoiceLimitGroups;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumDspBusSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumDspBusSettingSnapshots;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumDspBus;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumGameVariables;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumSelectors;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumReacts;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomSelectorSettingsParam> Selector;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomAisacControlSettingsParam> AisacControl;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomGameVariableParam> GameVariable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomGlobalAisacSettingsParam> GlobalAisac;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCategoryParam> Category;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomDspBusSettingsParam> DspBusSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomStringWithComment> React;
    
    FAtomConfigDataTable();
};

