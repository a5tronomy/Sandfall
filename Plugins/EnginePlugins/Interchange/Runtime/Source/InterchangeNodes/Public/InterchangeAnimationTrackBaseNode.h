#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeAnimationTrackBaseNode.generated.h"

UCLASS(Abstract)
class INTERCHANGENODES_API UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeAnimationTrackBaseNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomCompletionMode(const int32& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomCompletionMode(int32& AttributeValue) const;
    
};

