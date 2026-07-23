#pragma once
#include "CoreMinimal.h"
#include "ELobbyLoginResult.generated.h"

UENUM()
enum class ELobbyLoginResult : uint8 {
    Success,
    Error_Create,
    Error_Start,
    Error_Master_Map,
    Error_Protocol,
    Error_API,
    Failure_Max_Member,
    Failure_Not_Found,
    Failure_Login,
    Failure_Absent,
    Failure_Expired,
};

