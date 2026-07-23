#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AtomCueInfoAttachedAisacControlParam.h"
#include "AtomCueInfoAttachedSelectorParam.h"
#include "AtomCueInfoBlocksParam.h"
#include "AtomCueInfoBusSendParam.h"
#include "AtomCueInfoCategoryParam.h"
#include "AtomCueInfoSelectorParam.h"
#include "AtomCueInfoTrackParam.h"
#include "AtomCueInfoDataTable.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueInfoDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CueId;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CueTypeIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CueType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FAtomCueInfoSelectorParam DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Volume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Public;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CategoryCuePriority;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CategoryCuePriorityType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CategoryCuePriorityTypeIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CuePriorityType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 CuePriorityTypeIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool EnableCueLimit;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 NumCueLimits;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Probability;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Length;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCueInfoCategoryParam> Category;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCueInfoTrackParam> Track;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCueInfoBusSendParam> BusSend;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCueInfoBlocksParam> Blocks;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCueInfoAttachedSelectorParam> AttachedSelector;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FAtomCueInfoAttachedAisacControlParam> AttachedAisacControl;
    
    CRIWARERUNTIME_API FAtomCueInfoDataTable();
};

