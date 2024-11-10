#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGDebugInformation.generated.h"

UCLASS(EditInlineNew)
class POLARIS_API UPolarisUMGDebugInformation : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGDebugInformation();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowInformation(bool flag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetWWNTMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetDebugInformation(const FString& build_date, const FString& build_revision, const FString& user_name, const FString& platform_id, const FString& polaris_id, const FString& tracking_num, const FString& server_label);
    
};

