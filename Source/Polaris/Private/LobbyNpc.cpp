#include "LobbyNpc.h"

ALobbyNpc::ALobbyNpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isDevelopmentOnly = false;
    this->_isTreasure = false;
    this->_isExistTreasure = false;
    this->_isReturenFromEvent = false;
    this->_isTreasureSuccess = false;
}




