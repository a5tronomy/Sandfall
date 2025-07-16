#include "UIBasePostProcessActor.h"

AUIBasePostProcessActor::AUIBasePostProcessActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UUIPostProcessRenderable* AUIBasePostProcessActor::GetUIPostProcessRenderable_Impl_Implementation() const {
    return NULL;
}

UUIPostProcessRenderable* AUIBasePostProcessActor::GetUIPostProcessRenderable_BP() const {
    return NULL;
}

UUIPostProcessRenderable* AUIBasePostProcessActor::GetUIPostProcessRenderable() const {
    return NULL;
}


