#include "UIItemEditorHelperComp.h"

UUIItemEditorHelperComp::UUIItemEditorHelperComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bSelectable = false;
    this->Parent = NULL;
    this->BodySetup = NULL;
}


