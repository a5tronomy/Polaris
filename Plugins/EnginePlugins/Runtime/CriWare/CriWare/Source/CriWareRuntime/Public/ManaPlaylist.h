#pragma once
#include "CoreMinimal.h"
#include "ManaSource.h"
#include "ManaPlaylist.generated.h"

class UManaMovie;

UCLASS(BlueprintType)
class CRIWARERUNTIME_API UManaPlaylist : public UManaSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UManaMovie*> Movies;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsAlpha;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsMixedTypes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsSeamless;
    
public:
    UManaPlaylist();

    UFUNCTION(BlueprintCallable)
    void RemoveAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Remove(UManaMovie* ManaMovie);
    
    UFUNCTION(BlueprintCallable)
    int32 Num();
    
    UFUNCTION(BlueprintCallable)
    bool IsSeamless();
    
    UFUNCTION(BlueprintCallable)
    bool IsMixedTypes();
    
    UFUNCTION(BlueprintCallable)
    bool IsAlpha();
    
    UFUNCTION(BlueprintCallable)
    void Insert(UManaMovie* ManaMovie, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UManaMovie* GetRandom(int32& InOutIndex);
    
    UFUNCTION(BlueprintCallable)
    UManaMovie* GetPrevious(int32& InOutIndex);
    
    UFUNCTION(BlueprintCallable)
    UManaMovie* GetNext(int32& InOutIndex);
    
    UFUNCTION(BlueprintCallable)
    UManaMovie* Get(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void Add(UManaMovie* ManaMovie);
    
};

