#include "LobbyMachineActor.h"

ALobbyMachineActor::ALobbyMachineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->_MachineType = ELobbyMachineType::Single;
    this->_MachineStyle = ELobbyMachineStyle::Standard;
    this->_uniqueId = 0;
    this->_groupId = 0;
    this->_isLeader = false;
    this->_animMale = NULL;
    this->_animFemale = NULL;
    this->_extraModelInstance = NULL;
    this->_enemy = NULL;
}


FString ALobbyMachineActor::GetOwnerSteamId() {
    return TEXT("");
}

int64 ALobbyMachineActor::GetOwnerCosmosId() {
    return 0;
}

ALobbyMachineActor* ALobbyMachineActor::GetMachineActor(int32 UniqueId) {
    return NULL;
}

int32 ALobbyMachineActor::GetGroupMatchNum() {
    return 0;
}


