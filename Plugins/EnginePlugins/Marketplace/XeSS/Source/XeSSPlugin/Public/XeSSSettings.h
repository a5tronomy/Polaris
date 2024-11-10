#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "XeSSSettings.generated.h"

UCLASS(Config=Engine)
class XESSPLUGIN_API UXeSSSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bEnableXeSSInEditorViewports;
    
    UPROPERTY(Config, EditAnywhere)
    FString DebugDataDumpPath;
    
    UXeSSSettings();

};

