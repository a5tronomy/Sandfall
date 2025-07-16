#pragma once
#include "CoreMinimal.h"
#include "LTweener.h"
#include "LTweenerSequence.generated.h"

class ULTweenerSequence;
class UObject;

UCLASS()
class LTWEEN_API ULTweenerSequence : public ULTweener {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<ULTweener*> tweenerList;
    
    UPROPERTY(VisibleAnywhere)
    TArray<ULTweener*> finishedTweenerList;
    
public:
    ULTweenerSequence();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULTweenerSequence* PrependInterval(UObject* WorldContextObject, float Interval);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULTweenerSequence* Prepend(UObject* WorldContextObject, ULTweener* tweener);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULTweenerSequence* Join(UObject* WorldContextObject, ULTweener* tweener);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULTweenerSequence* Insert(UObject* WorldContextObject, float timePosition, ULTweener* tweener);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULTweenerSequence* AppendInterval(UObject* WorldContextObject, float Interval);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    ULTweenerSequence* Append(UObject* WorldContextObject, ULTweener* tweener);
    
};

