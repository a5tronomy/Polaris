#pragma once
#include "CoreMinimal.h"
#include "LobbyInput.generated.h"

USTRUCT(BlueprintType)
struct FLobbyInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool _isInputActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInputByKeyboard;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isInvalidByDialog;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isDown;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLeft;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isUp;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceBottom;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceLeft;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isFaceTop;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLeftShoulder;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isLeftTrigger;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isRightShoulder;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isRightTrigger;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isSpecialLeft;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isSpecialRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isL3;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isR3;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isMouseRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isDecide;
    
    UPROPERTY(BlueprintReadOnly)
    bool _isCancel;
    
    UPROPERTY(BlueprintReadOnly)
    float _rx;
    
    UPROPERTY(BlueprintReadOnly)
    float _ry;
    
    UPROPERTY(BlueprintReadOnly)
    float _lx;
    
    UPROPERTY(BlueprintReadOnly)
    float _ly;
    
    UPROPERTY(BlueprintReadOnly)
    float _rsValue;
    
    UPROPERTY(BlueprintReadOnly)
    float _rsRadian;
    
    UPROPERTY(BlueprintReadOnly)
    float _lsValue;
    
    UPROPERTY(BlueprintReadOnly)
    float _lsRadian;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _dir8;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _updownLvl;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _updownTrg;
    
    POLARIS_API FLobbyInput();
};

