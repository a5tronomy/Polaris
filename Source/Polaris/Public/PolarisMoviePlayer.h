#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisMoviePlayerEventDelegate.h"
#include "PolarisMoviePlayerPlayEventDelegate.h"
#include "PolarisMoviePlayer.generated.h"

class UManaTexture;
class UMaterial;
class UPolarisManaPlayer;

UCLASS(BlueprintType)
class POLARIS_API UPolarisMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPolarisMoviePlayerPlayEvent OnPlaying;
    
    UPROPERTY(BlueprintAssignable)
    FPolarisMoviePlayerEvent OnPlayEnd;
    
    UPROPERTY(BlueprintAssignable)
    FPolarisMoviePlayerEvent OnStop;
    
private:
    UPROPERTY(Transient)
    UPolarisManaPlayer* mana_player_;
    
    UPROPERTY(Transient)
    UManaTexture* player_texture_;
    
    UPROPERTY(Transient)
    UManaTexture* mana_texture_;
    
    UPROPERTY(Transient)
    TArray<uint8> usm_data_;
    
    UPROPERTY(Transient)
    UMaterial* material_opaque_;
    
    UPROPERTY(Transient)
    UMaterial* material_translucent_;
    
public:
    UPolarisMoviePlayer();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Stop() const;
    
    UFUNCTION(BlueprintCallable)
    void PlayStreamWithID(UManaTexture* Texture, int32 movie_id, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayStream(UManaTexture* Texture, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayMemoryWithID(const TArray<uint8>& Data, int32 movie_id, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayMemory(const TArray<uint8>& Data, bool is_opaque, bool is_loop, float Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Pause(bool is_pause) const;
    
private:
    UFUNCTION()
    void OnManaPlayerMovieOpened(const FString& opened_url);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSeeking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMovieTotalFrame() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMovieID() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMovieFrame() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCriStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllEvents();
    
};

