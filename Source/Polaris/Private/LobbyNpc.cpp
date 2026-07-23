#include "LobbyNpc.h"

ALobbyNpc::ALobbyNpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isDevelopmentOnly = false;
    this->_isTreasure = false;
    this->_isIronBird = false;
    this->_isExistTreasure = false;
    this->_isReturenFromEvent = false;
    this->_isTreasureSuccess = false;
}

bool ALobbyNpc::IsVisibleUnlockDialog() {
    return false;
}




void ALobbyNpc::GetTreasureItem() {
}


