#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDLSSSettingOverride.h"
#include "DLSSOverrideSettings.generated.h"

UCLASS(Config=Engine)
class DLSS_API UDLSSOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;
    
    UPROPERTY(Config, EditAnywhere)
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    
    UPROPERTY(Config, EditAnywhere)
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;
    
    UDLSSOverrideSettings();

};

