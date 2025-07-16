#include "UIBaseActor.h"

AUIBaseActor::AUIBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UUIItem* AUIBaseActor::GetUIItem_Impl_Implementation() const {
    return NULL;
}

UUIItem* AUIBaseActor::GetUIItem_BP() const {
    return NULL;
}

UUIItem* AUIBaseActor::GetUIItem() const {
    return NULL;
}


