#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELobbyEmoteCategory.h"
#include "ELobbyEmoteInterpolation.h"
#include "ELobbyEmoteType.h"
#include "LobbyEmoteInfo.generated.h"

class UAnimSequence;
class UTexture2D;

USTRUCT(BlueprintType)
struct FLobbyEmoteInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FacialId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName textId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyEmoteCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SoftStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SoftLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SoftEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SoftStartF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SoftLoopF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> SoftEndF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Always;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> SoftIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 unlockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyEmoteInterpolation Interpolation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELobbyEmoteType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 rarity;
    
    POLARIS_API FLobbyEmoteInfo();
};

