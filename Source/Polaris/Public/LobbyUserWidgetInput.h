#pragma once
#include "CoreMinimal.h"
#include "ELobbyInputDeviceType.h"
#include "LobbyUserWidgetInput.generated.h"

USTRUCT(BlueprintType)
struct FLobbyUserWidgetInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool _down;
    
    UPROPERTY(BlueprintReadOnly)
    bool _left;
    
    UPROPERTY(BlueprintReadOnly)
    bool _right;
    
    UPROPERTY(BlueprintReadOnly)
    bool _up;
    
    UPROPERTY(BlueprintReadOnly)
    bool _faceBottom;
    
    UPROPERTY(BlueprintReadOnly)
    bool _faceLeft;
    
    UPROPERTY(BlueprintReadOnly)
    bool _faceRight;
    
    UPROPERTY(BlueprintReadOnly)
    bool _faceTop;
    
    UPROPERTY(BlueprintReadOnly)
    bool _leftSholder;
    
    UPROPERTY(BlueprintReadOnly)
    bool _leftTrigger;
    
    UPROPERTY(BlueprintReadOnly)
    bool _leftThumbButton;
    
    UPROPERTY(BlueprintReadOnly)
    bool _rightSholder;
    
    UPROPERTY(BlueprintReadOnly)
    bool _rightTrigger;
    
    UPROPERTY(BlueprintReadOnly)
    bool _rightThumbButton;
    
    UPROPERTY(BlueprintReadOnly)
    bool _specialLeft;
    
    UPROPERTY(BlueprintReadOnly)
    float _updownValue;
    
    UPROPERTY(BlueprintReadOnly)
    bool _escape;
    
    UPROPERTY(BlueprintReadOnly)
    bool _enter;
    
    UPROPERTY(BlueprintReadOnly)
    ELobbyInputDeviceType Device;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _updownTrg;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _leftrightTrg;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _leftrightshoulderTrg;
    
    POLARIS_API FLobbyUserWidgetInput();
};

