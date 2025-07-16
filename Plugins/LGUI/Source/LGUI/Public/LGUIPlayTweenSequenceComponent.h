#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGUIDelegateHandleWrapper.h"
#include "LGUIEventDelegate.h"
#include "LGUIPlayTweenCompleteDynamicDelegateDelegate.h"
#include "LGUIPrefabInterface.h"
#include "LGUIPlayTweenSequenceComponent.generated.h"

class ULGUIPlayTween;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIPlayTweenSequenceComponent : public UActorComponent, public ILGUIPrefabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool playOnStart;
    
    UPROPERTY(EditAnywhere)
    bool bPlayNextWhenCycleComplete;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<ULGUIPlayTween*> playTweenArray;
    
    UPROPERTY(EditAnywhere)
    FLGUIEventDelegate OnComplete;
    
public:
    ULGUIPlayTweenSequenceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterOnComplete(const FLGUIDelegateHandleWrapper& InDelegateHandle);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    FLGUIDelegateHandleWrapper RegisterOnComplete(const FLGUIPlayTweenCompleteDynamicDelegate& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    

    // Fix for true pure virtual functions not being implemented
};

