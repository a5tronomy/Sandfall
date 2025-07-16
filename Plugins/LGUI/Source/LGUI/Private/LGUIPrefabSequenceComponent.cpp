#include "LGUIPrefabSequenceComponent.h"

ULGUIPrefabSequenceComponent::ULGUIPrefabSequenceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentSequenceIndex = 0;
    this->SequencePlayer = NULL;
}

void ULGUIPrefabSequenceComponent::SetSequenceByName(FName InName) {
}

void ULGUIPrefabSequenceComponent::SetSequenceByIndex(int32 InIndex) {
}

void ULGUIPrefabSequenceComponent::SetSequenceByDisplayName(const FString& InName) {
}

void ULGUIPrefabSequenceComponent::InitSequencePlayer() {
}

ULGUIPrefabSequencePlayer* ULGUIPrefabSequenceComponent::GetSequencePlayer() const {
    return NULL;
}

ULGUIPrefabSequence* ULGUIPrefabSequenceComponent::GetSequenceByName(FName InName) const {
    return NULL;
}

ULGUIPrefabSequence* ULGUIPrefabSequenceComponent::GetSequenceByIndex(int32 InIndex) const {
    return NULL;
}

ULGUIPrefabSequence* ULGUIPrefabSequenceComponent::GetSequenceByDisplayName(const FString& InName) const {
    return NULL;
}

TArray<ULGUIPrefabSequence*> ULGUIPrefabSequenceComponent::GetSequenceArray() const {
    return TArray<ULGUIPrefabSequence*>();
}

int32 ULGUIPrefabSequenceComponent::GetCurrentSequenceIndex() const {
    return 0;
}

ULGUIPrefabSequence* ULGUIPrefabSequenceComponent::GetCurrentSequence() const {
    return NULL;
}


