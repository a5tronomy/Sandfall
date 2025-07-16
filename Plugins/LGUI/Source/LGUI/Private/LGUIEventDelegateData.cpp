#include "LGUIEventDelegateData.h"

FLGUIEventDelegateData::FLGUIEventDelegateData() {
    this->HelperActor = NULL;
    this->HelperClass = NULL;
    this->TargetObject = NULL;
    this->ParamType = ELGUIEventDelegateParameterType::None;
    this->ReferenceObject = NULL;
    this->UseNativeParameter = false;
    this->CacheFunction = NULL;
}

