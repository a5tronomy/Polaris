#include "LobbyMatchGuide.h"

ALobbyMatchGuide::ALobbyMatchGuide(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_maxJoinNum = 0;
    this->_joinNum = 0;
    this->_passcodeFlag = false;
    this->_cosmosId = 0;
}

void ALobbyMatchGuide::GetSessionInformation(const FString& sessionId, ALobbyMatchGuide::FOnGetSessionInformation OnGetSessionInformation) {
}


