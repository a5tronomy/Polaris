#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Components/EditableTextBox.h"
#include "PolarisEditableTextBox.generated.h"

UCLASS()
class POLARIS_API UPolarisEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UPolarisEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void SetRawText(const FString& raw_text);
    
    UFUNCTION()
    void OnTextCommittedEvent(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION()
    void OnTextChangedEvent(const FText& InText);
    
};

