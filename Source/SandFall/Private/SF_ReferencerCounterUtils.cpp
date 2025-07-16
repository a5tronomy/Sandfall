#include "SF_ReferencerCounterUtils.h"

USF_ReferencerCounterUtils::USF_ReferencerCounterUtils() {
}

void USF_ReferencerCounterUtils::UnbindEventOnChanged(FSF_ReferenceCounter& Target, FOnReferenceFlagChanged Event) {
}

bool USF_ReferencerCounterUtils::RemoveReference(FSF_ReferenceCounter& Target, FSF_ReferenceCounterHandle& ReferenceHandle) {
    return false;
}

void USF_ReferencerCounterUtils::RemoveAllReferences(FSF_ReferenceCounter& Target) {
}

USF_ReferenceCounterWrapper* USF_ReferencerCounterUtils::MakeReferenceCounterWrapper() {
    return NULL;
}

bool USF_ReferencerCounterUtils::IsHandleValid(FSF_ReferenceCounterHandle ReferenceHandle) {
    return false;
}

bool USF_ReferencerCounterUtils::GetReferenceCounterState(const FSF_ReferenceCounter& Target) {
    return false;
}

void USF_ReferencerCounterUtils::BindEventOnChanged(FSF_ReferenceCounter& Target, FOnReferenceFlagChanged Event) {
}

bool USF_ReferencerCounterUtils::AddReference(FSF_ReferenceCounter& Target, FSF_ReferenceCounterHandle& ReferenceHandle, const FString& DebugName) {
    return false;
}


