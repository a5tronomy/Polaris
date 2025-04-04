#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "Components/SceneComponent.h"
#include "EAtomCueSheetLoaderComponentStatus.h"
#include "AtomCueSheetLoaderComponent.generated.h"

class UCriFsBinderComponent;
class UObject;
class USoundAtomCueSheet;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomCueSheetLoaderComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadError);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadCompleted);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAtomCueSheetLoaded, USoundAtomCueSheet*, Loaded);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoftObjectPath CueSheetReference;
    
    UPROPERTY(Instanced, Transient)
    UCriFsBinderComponent* BinderComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadCompleted OnLoadCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadError OnLoadError;
    
private:
    UPROPERTY(Transient)
    USoundAtomCueSheet* CueSheet;
    
public:
    UAtomCueSheetLoaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadAtomCueSheet(UObject* WorldContextObject, TSoftObjectPtr<USoundAtomCueSheet> Asset, UAtomCueSheetLoaderComponent::FOnAtomCueSheetLoaded OnLoaded, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable)
    EAtomCueSheetLoaderComponentStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCueSheet* GetAtomCueSheet();
    
};

