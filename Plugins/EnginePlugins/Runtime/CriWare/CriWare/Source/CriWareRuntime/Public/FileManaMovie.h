#pragma once
#include "CoreMinimal.h"
#include "ManaMovie.h"
#include "FileManaMovie.generated.h"

UCLASS()
class CRIWARERUNTIME_API UFileManaMovie : public UManaMovie {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bPrecacheFile;
    
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    FString FilePath;
    
public:
    UFileManaMovie();

    UFUNCTION(BlueprintCallable)
    void SetFilePath(const FString& Path);
    
};

