#include "LGUIImageSequencePlayer.h"

ULGUIImageSequencePlayer::ULGUIImageSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FPS = 24.00f;
    this->Loop = true;
    this->playOnStart = true;
    this->affectByGamePause = false;
    this->affectByTimeDilation = false;
}

void ULGUIImageSequencePlayer::Stop() {
}

void ULGUIImageSequencePlayer::SetLoop(bool Value) {
}

void ULGUIImageSequencePlayer::SetFps(float Value) {
}

void ULGUIImageSequencePlayer::SeekTime(float Time) {
}

void ULGUIImageSequencePlayer::SeekFrame(int32 FrameNumber) {
}

void ULGUIImageSequencePlayer::Play() {
}

void ULGUIImageSequencePlayer::Pause() {
}

bool ULGUIImageSequencePlayer::GetLoop() const {
    return false;
}

bool ULGUIImageSequencePlayer::GetIsPlaying() const {
    return false;
}

float ULGUIImageSequencePlayer::GetFps() const {
    return 0.0f;
}

float ULGUIImageSequencePlayer::GetDuration() const {
    return 0.0f;
}


