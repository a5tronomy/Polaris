#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugCustomizeMapActorSettingStruct.h"
#include "DebugCustomizeMapActorSetting.generated.h"

UCLASS(Config=DebugCustomizeMapActorSetting)
class POLARIS_API UDebugCustomizeMapActorSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FDebugCustomizeMapActorSettingStruct> SettingStructArray;
    
    UDebugCustomizeMapActorSetting();

};

