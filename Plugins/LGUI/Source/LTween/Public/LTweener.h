#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELTweenEase.h"
#include "ELTweenLoop.h"
#include "ELTweenTickType.h"
#include "LTweenerFloatDynamicDelegateDelegate.h"
#include "LTweenerSimpleDynamicDelegateDelegate.h"
#include "LTweener.generated.h"

class UCurveFloat;
class ULTweener;

UCLASS(Abstract, BlueprintType)
class LTWEEN_API ULTweener : public UObject {
    GENERATED_BODY()
public:
    ULTweener();

    UFUNCTION(BlueprintCallable)
    ULTweener* SetTickType(ELTweenTickType Value);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetLoopType(ELTweenLoop newLoopType);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetLoop(ELTweenLoop newLoopType, int32 newLoopCount);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetEaseCurve(UCurveFloat* newCurve);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetEase(ELTweenEase easetype);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetDelay(float newDelay);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetCurveFloat(UCurveFloat* newCurveFloat);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetAffectByTimeDilation(bool Value);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* SetAffectByGamePause(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Restart();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OnUpdate(const FLTweenerFloatDynamicDelegate& newUpdate);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OnStart(const FLTweenerSimpleDynamicDelegate& newStart);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OnCycleStart(const FLTweenerSimpleDynamicDelegate& newCycleStart);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OnCycleComplete(const FLTweenerSimpleDynamicDelegate& newCycleComplete);
    
    UFUNCTION(BlueprintCallable)
    ULTweener* OnComplete(const FLTweenerSimpleDynamicDelegate& newComplete);
    
    UFUNCTION(BlueprintCallable)
    void Kill(bool callComplete);
    
    UFUNCTION(BlueprintCallable)
    void Goto(float timePoint);
    
    UFUNCTION(BlueprintPure)
    ELTweenTickType GetTickType() const;
    
    UFUNCTION(BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetLoopCycleCount() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLoopCount();
    
    UFUNCTION(BlueprintPure)
    float GetElapsedTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAffectByTimeDilation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAffectByGamePause() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceComplete();
    
};

