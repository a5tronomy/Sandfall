#pragma once
#include "CoreMinimal.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "UISelectableTransitionComponent.generated.h"

class ULTweener;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISelectableTransitionComponent : public ULGUILifeCycleUIBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<ULTweener*> TweenerCollection;
    
public:
    UUISelectableTransitionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopTransition();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnStartCustomTransition(FName InTransitionName, bool InImmediateSet);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnPressed(bool InImmediateSet);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnNormal(bool InImmediateSet);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnHighlighted(bool InImmediateSet);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnDisabled(bool InImmediateSet);
    
public:
    UFUNCTION(BlueprintCallable)
    void CollectTweeners(const TSet<ULTweener*>& InItems);
    
    UFUNCTION(BlueprintCallable)
    void CollectTweener(ULTweener* InItem);
    
};

