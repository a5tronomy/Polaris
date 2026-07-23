#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "EAutoTest.h"
#include "PolarisTestTask.h"
#include "PolarisAutoTest.generated.h"

class UPolarisTestInterface;

UCLASS(Blueprintable)
class POLARIS_API UPolarisAutoTest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAutoTest AutoTestType;
    
    UPROPERTY(EditAnywhere)
    TArray<FPolarisTestTask> TestTasks;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<UPolarisTestInterface*> Tests;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CurrentTest;
    
    UPROPERTY(BlueprintReadWrite)
    int32 State;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Counter;
    
    UPolarisAutoTest();

protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Wait(int32 NewWait, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void TickCore(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartTest();
    
    UFUNCTION(BlueprintCallable)
    void RestartTest();
    
    UFUNCTION(BlueprintCallable)
    bool NextTest();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentTestIndex() const;
    
    UFUNCTION(BlueprintPure)
    UPolarisTestInterface* GetCurrentTest() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishTest();
    
    UFUNCTION(BlueprintCallable)
    bool ExecTest(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void Delay(float Time, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void AutoTestLog(const FString& Text);
    
};

