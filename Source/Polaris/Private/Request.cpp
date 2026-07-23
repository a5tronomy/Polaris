#include "Request.h"

FRequest::FRequest() {
    this->Type = ERequestType::Invalid;
    this->WorldContextObject = NULL;
    this->TextureRenderTarget = NULL;
    this->Material = NULL;
    this->EstimateTime = 0.00f;
}

