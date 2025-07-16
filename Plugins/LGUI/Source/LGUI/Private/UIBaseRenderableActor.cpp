#include "UIBaseRenderableActor.h"

AUIBaseRenderableActor::AUIBaseRenderableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UUIBaseRenderable* AUIBaseRenderableActor::GetUIRenderable_Impl_Implementation() const {
    return NULL;
}

UUIBaseRenderable* AUIBaseRenderableActor::GetUIRenderable_BP() const {
    return NULL;
}

UUIBaseRenderable* AUIBaseRenderableActor::GetUIRenderable() const {
    return NULL;
}


