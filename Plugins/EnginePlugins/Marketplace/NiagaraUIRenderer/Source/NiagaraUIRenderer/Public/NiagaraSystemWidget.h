#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "NiagaraSystemWidget.generated.h"

class ANiagaraUIActor;
class UMaterialInterface;
class UNiagaraSystem;
class UNiagaraUIComponent;

UCLASS()
class NIAGARAUIRENDERER_API UNiagaraSystemWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* NiagaraSystemReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UMaterialInterface*, UMaterialInterface*> MaterialRemapList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TickWhenPaused;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool FakeDepthScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float FakeDepthScaleDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ShowDebugSystemInWorld;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool DisableWarnings;
    
private:
    UPROPERTY()
    ANiagaraUIActor* NiagaraActor;
    
    UPROPERTY(Instanced)
    UNiagaraUIComponent* NiagaraComponent;
    
public:
    UNiagaraSystemWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateTickWhenPaused(bool NewTickWhenPaused);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNiagaraSystemReference(UNiagaraSystem* NewNiagaraSystem);
    
    UFUNCTION(BlueprintPure)
    UNiagaraUIComponent* GetNiagaraComponent();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSystem();
    
    UFUNCTION(BlueprintCallable)
    void ActivateSystem(bool Reset);
    
};

