#include "UISpriteSequencePlayer.h"

UUISpriteSequencePlayer::UUISpriteSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->snapSpriteSize = true;
}

void UUISpriteSequencePlayer::SetSpriteSequence(TArray<ULGUISpriteData_BaseObject*> Value) {
}

void UUISpriteSequencePlayer::SetSnapSpriteSize(bool Value) {
}

TArray<ULGUISpriteData_BaseObject*> UUISpriteSequencePlayer::GetSpriteSequence() const {
    return TArray<ULGUISpriteData_BaseObject*>();
}

bool UUISpriteSequencePlayer::GetSnapSpriteSize() const {
    return false;
}


