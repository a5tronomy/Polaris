#pragma once
#include "CoreMinimal.h"
#include "EAkResult.generated.h"

UENUM()
enum class EAkResult : uint8 {
    NotImplemented,
    Success,
    Fail,
    PartialSuccess,
    NotCompatible,
    AlreadyConnected,
    InvalidFile = 7,
    AudioFileHeaderTooLarge,
    MaxReached,
    InvalidID = 14,
    IDNotFound,
    InvalidInstanceID,
    NoMoreData,
    InvalidStateGroup = 20,
    ChildAlreadyHasAParent,
    InvalidLanguage,
    CannotAddItseflAsAChild,
    InvalidParameter = 31,
    ElementAlreadyInList = 35,
    PathNotFound,
    PathNoVertices,
    PathNotRunning,
    PathNotPaused,
    PathNodeAlreadyInList,
    PathNodeNotInList,
    DataNeeded = 43,
    NoDataNeeded,
    DataReady,
    NoDataReady,
    InsufficientMemory = 52,
    Cancelled,
    UnknownBankID,
    BankReadError = 56,
    InvalidSwitchType,
    FormatNotReady = 63,
    WrongBankVersion,
    FileNotFound = 66,
    DeviceNotReady,
    BankAlreadyLoaded = 69,
    RenderedFX = 71,
    ProcessNeeded,
    ProcessDone,
    MemManagerNotInitialized,
    StreamMgrNotInitialized,
    SSEInstructionsNotSupported,
    Busy,
    UnsupportedChannelConfig,
    PluginMediaNotAvailable,
    MustBeVirtualized,
    CommandTooLarge,
    RejectedByFilter,
    InvalidCustomPlatformName,
    DLLCannotLoad,
    DLLPathNotFound,
    NoJavaVM,
    OpenSLError,
    PluginNotRegistered,
    DataAlignmentError,
};

