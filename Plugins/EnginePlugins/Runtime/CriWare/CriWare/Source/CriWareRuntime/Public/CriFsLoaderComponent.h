#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ECriFsLoaderStatus.h"
#include "CriFsLoaderComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UCriFsLoaderComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadError);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadCompleted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FilePath;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadCompleted OnLoadCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnLoadError OnLoadError;
    
    UCriFsLoaderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable)
    ECriFsLoaderStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetDataArray();
    
};

