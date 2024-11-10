#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "ELobbyMachineStyle.h"
#include "ELobbyMachineType.h"
#include "LobbyMachineActor.generated.h"

class AActor;
class ALobbyMachineActor;
class UAnimSequence;
class UStaticMesh;

UCLASS()
class POLARIS_API ALobbyMachineActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyMachineType _MachineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyMachineStyle _MachineStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _uniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _groupId;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool _isLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _animMale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* _animFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> _extraModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _extraSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _extraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _extraRotation;
    
    UPROPERTY(BlueprintReadWrite)
    UStaticMesh* _extraModelInstance;
    
    UPROPERTY(EditDefaultsOnly)
    AActor* _enemy;
    
    UPROPERTY(BlueprintReadOnly)
    FString _sessionId;
    
private:
    UPROPERTY()
    TMap<int32, ALobbyMachineActor*> _playermatch;
    
public:
    ALobbyMachineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void ImplGetStayTargetLocationAndRotation(FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintPure)
    FString GetOwnerSteamId();
    
    UFUNCTION(BlueprintPure)
    int64 GetOwnerCosmosId();
    
    UFUNCTION(BlueprintCallable)
    static ALobbyMachineActor* GetMachineActor(int32 UniqueId);
    
    UFUNCTION(BlueprintPure)
    int32 GetGroupMatchNum();
    
};

