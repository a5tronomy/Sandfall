#pragma once
#include "CoreMinimal.h"
#include "EUILayoutAnimationType.h"
#include "UILayoutBase.h"
#include "UILayoutWithAnimation.generated.h"

class ULTweener;
class UUILayoutWithAnimation_CustomAnimation;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUILayoutWithAnimation : public UUILayoutBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EUILayoutAnimationType AnimationType;
    
    UPROPERTY(EditAnywhere)
    float AnimationDuration;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUILayoutWithAnimation_CustomAnimation* CustomAnimation;
    
    UPROPERTY(Transient)
    TArray<ULTweener*> TweenerArray;
    
public:
    UUILayoutWithAnimation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCustomAnimation(UUILayoutWithAnimation_CustomAnimation* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationType(EUILayoutAnimationType Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationDuration(float Value);
    
    UFUNCTION(BlueprintPure)
    UUILayoutWithAnimation_CustomAnimation* GetCustomAnimation() const;
    
    UFUNCTION(BlueprintPure)
    EUILayoutAnimationType GetAnimationType() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAllAnimations(bool callComplete);
    
};

