#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisDramaActor.generated.h"

class ACameraActor;
class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;
class UMovieScene;

UCLASS()
class POLARIS_API APolarisDramaActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequencePlayer* LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULevelSequence* LevelSequence2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MotHeadFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ResetClothCheckMoveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsStopAtEnd;
    
private:
    UPROPERTY()
    AActor* m_dummy_actor;
    
    UPROPERTY()
    ACameraActor* m_camera_actor;
    
    UPROPERTY(Instanced)
    UMovieScene* m_movie_scene;
    
public:
    APolarisDramaActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCameraCut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Play();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IsPlaying();
    
    UFUNCTION(BlueprintImplementableEvent)
    ULevelSequencePlayer* GetPlayer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreatePlayer(ULevelSequence* LevelSequence);
    
};

