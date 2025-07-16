#pragma once
#include "CoreMinimal.h"
#include "ExtendedObject.h"
#include "ConditionChecker.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class SANDFALL_API UConditionChecker : public UExtendedObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UObject> WorldContextObject;
    
public:
    UConditionChecker();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool CheckInternal();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool Check(UObject* WorldContext);
    
};

