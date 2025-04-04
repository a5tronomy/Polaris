#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "WwiseLocalizedEventCookedData.h"
#include "AkActionOnEventType.h"
#include "AkAudioType.h"
#include "EAkCurveInterpolation.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "AkAudioEvent.generated.h"

class AActor;
class UAkAudioBank;
class UAkComponent;
class UAkGameObject;
class UObject;

UCLASS()
class AKAUDIO_API UAkAudioEvent : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float MaxAttenuationRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    bool IsInfinite;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float MinimumDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float MaximumDuration;
    
    UPROPERTY(Transient, VisibleAnywhere)
    FWwiseLocalizedEventCookedData EventCookedData;
    
    UPROPERTY()
    UAkAudioBank* RequiredBank;
    
    UAkAudioEvent();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentActionInfo"))
    int32 PostOnGameObjectAndWait(UAkGameObject* GameObject, const FLatentActionInfo LatentActionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostOnGameObject(UAkGameObject* GameObject, const FOnAkPostEventCallback& Delegate, const int32 CallbackMask);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentActionInfo"))
    int32 PostOnComponentAndWait(UAkComponent* Component, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostOnComponent(UAkComponent* Component, const FOnAkPostEventCallback& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentActionInfo"))
    int32 PostOnActorAndWait(const AActor* Actor, const bool bStopWhenAttachedObjectDestroyed, const FLatentActionInfo LatentActionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostOnActor(const AActor* Actor, const FOnAkPostEventCallback& Delegate, const int32 CallbackMask, const bool bStopWhenAttachedObjectDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    int32 PostAtLocation(const FVector Location, const FRotator Orientation, const FOnAkPostEventCallback& Callback, const int32 CallbackMask, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 ExecuteAction(const AkActionOnEventType ActionType, const AActor* Actor, const int32 PlayingID, const int32 TransitionDuration, const EAkCurveInterpolation FadeCurve);
    
};

