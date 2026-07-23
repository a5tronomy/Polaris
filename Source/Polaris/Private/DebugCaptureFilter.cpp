#include "DebugCaptureFilter.h"

FDebugCaptureFilter::FDebugCaptureFilter() {
    this->Timing = 0;
    this->SourceCategory = EDebugCaptureCategory::EDebugCaptureCategory_None;
    this->Execution = EDebugCaptureItemFilterExecution::None;
}

