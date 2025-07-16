#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELTweenEase.h"
#include "ELTweenLoop.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTweenCompleteDynamicDelegateDelegate.h"
#include "LGUIPlayTweenCycleCompleteDynamicDelegateDelegate.h"
#include "LGUIPlayTween.generated.h"

class UCurveFloat;
class ULTweener;

UCLASS(Abstract, BlueprintType, DefaultToInstanced, EditInlineNew)
class LGUI_API ULGUIPlayTween : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ELTweenLoop loopType;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    ELTweenEase easetype;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* easeCurve;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float StartDelay;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnStart;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate onUpdateProgress;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnComplete;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnCycleComplete;
    
    UPROPERTY(EditAnywhere)
    bool affectByGamePause;
    
    UPROPERTY(EditAnywhere)
    bool affectByTimeDilation;
    
    UPROPERTY(Transient)
    ULTweener* tweener;
    
public:
    ULGUIPlayTween();

    UFUNCTION(BlueprintCallable)
    void UnregisterOnCycleComplete(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterOnComplete(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnCycleComplete(const FLGUIPlayTweenCycleCompleteDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnComplete(const FLGUIPlayTweenCompleteDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintPure)
    ULTweener* GetTweener() const;
    
};

