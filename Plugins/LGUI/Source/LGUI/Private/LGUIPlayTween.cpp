#include "LGUIPlayTween.h"

ULGUIPlayTween::ULGUIPlayTween() {
    this->loopType = ELTweenLoop::Once;
    this->LoopCount = -1;
    this->easetype = ELTweenEase::Linear;
    this->easeCurve = NULL;
    this->Duration = 0.50f;
    this->StartDelay = 0.00f;
    this->affectByGamePause = false;
    this->affectByTimeDilation = false;
    this->tweener = NULL;
}

void ULGUIPlayTween::UnregisterOnCycleComplete(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void ULGUIPlayTween::UnregisterOnComplete(const FLGUIDelegateHandleWrapper& InDelegateHandle) {
}

void ULGUIPlayTween::Stop() {
}

void ULGUIPlayTween::Start() {
}

FLGUIDelegateHandleWrapper ULGUIPlayTween::RegisterOnCycleComplete(const FLGUIPlayTweenCycleCompleteDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

FLGUIDelegateHandleWrapper ULGUIPlayTween::RegisterOnComplete(const FLGUIPlayTweenCompleteDynamicDelegate& InDelegate) {
    return FLGUIDelegateHandleWrapper{};
}

ULTweener* ULGUIPlayTween::GetTweener() const {
    return NULL;
}


