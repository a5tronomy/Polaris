#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ECriFsBinderStatus.h"
#include "CriFsBinderComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UCriFsBinderComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBindError);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBindCompleted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FilePath;
    
    UPROPERTY(BlueprintAssignable)
    FOnBindCompleted OnBindCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnBindError OnBindError;
    
    UCriFsBinderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    ECriFsBinderStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    void Bind();
    
};

