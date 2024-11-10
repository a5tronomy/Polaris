#pragma once
#include "CoreMinimal.h"
#include "DebugCustomizeMapActorSettingStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDebugCustomizeMapActorSettingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    int32 SelectedFighter;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<int32> SelectedFighterArray;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<int32> DispChTypeArray;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<int32> DispChSeasonArray;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<int32, FString> EquipItemNameMap;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<int32, FString> EquipItemAccNameMap;
    
    FDebugCustomizeMapActorSettingStruct();
};

