#include "LGUIBaseEventData.h"

ULGUIBaseEventData::ULGUIBaseEventData() {
    this->SelectedComponent = NULL;
    this->EventType = EPointerEventType::Click;
}

FString ULGUIBaseEventData::ToString() const {
    return TEXT("");
}


