#include "LTweener.h"

ULTweener::ULTweener() {
}

ULTweener* ULTweener::SetTickType(ELTweenTickType Value) {
    return NULL;
}

ULTweener* ULTweener::SetLoopType(ELTweenLoop newLoopType) {
    return NULL;
}

ULTweener* ULTweener::SetLoop(ELTweenLoop newLoopType, int32 newLoopCount) {
    return NULL;
}

ULTweener* ULTweener::SetEaseCurve(UCurveFloat* newCurve) {
    return NULL;
}

ULTweener* ULTweener::SetEase(ELTweenEase easetype) {
    return NULL;
}

ULTweener* ULTweener::SetDelay(float newDelay) {
    return NULL;
}

ULTweener* ULTweener::SetCurveFloat(UCurveFloat* newCurveFloat) {
    return NULL;
}

ULTweener* ULTweener::SetAffectByTimeDilation(bool Value) {
    return NULL;
}

ULTweener* ULTweener::SetAffectByGamePause(bool Value) {
    return NULL;
}

void ULTweener::Resume() {
}

void ULTweener::Restart() {
}

void ULTweener::Pause() {
}

ULTweener* ULTweener::OnUpdate(const FLTweenerFloatDynamicDelegate& newUpdate) {
    return NULL;
}

ULTweener* ULTweener::OnStart(const FLTweenerSimpleDynamicDelegate& newStart) {
    return NULL;
}

ULTweener* ULTweener::OnCycleStart(const FLTweenerSimpleDynamicDelegate& newCycleStart) {
    return NULL;
}

ULTweener* ULTweener::OnCycleComplete(const FLTweenerSimpleDynamicDelegate& newCycleComplete) {
    return NULL;
}

ULTweener* ULTweener::OnComplete(const FLTweenerSimpleDynamicDelegate& newComplete) {
    return NULL;
}

void ULTweener::Kill(bool callComplete) {
}

void ULTweener::Goto(float timePoint) {
}

ELTweenTickType ULTweener::GetTickType() const {
    return ELTweenTickType::PrePhysics;
}

float ULTweener::GetProgress() const {
    return 0.0f;
}

int32 ULTweener::GetLoopCycleCount() const {
    return 0;
}

int32 ULTweener::GetLoopCount() {
    return 0;
}

float ULTweener::GetElapsedTime() const {
    return 0.0f;
}

float ULTweener::GetDuration() const {
    return 0.0f;
}

bool ULTweener::GetAffectByTimeDilation() const {
    return false;
}

bool ULTweener::GetAffectByGamePause() const {
    return false;
}

void ULTweener::ForceComplete() {
}


