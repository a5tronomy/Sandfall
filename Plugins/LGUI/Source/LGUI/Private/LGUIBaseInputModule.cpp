#include "LGUIBaseInputModule.h"

ULGUIBaseInputModule::ULGUIBaseInputModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void ULGUIBaseInputModule::ClearEvent() {
}


