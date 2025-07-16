#pragma once
#include "CoreMinimal.h"
#include "InterchangeLightNode.h"
#include "InterchangeRectLightNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeRectLightNode : public UInterchangeLightNode {
    GENERATED_BODY()
public:
    UInterchangeRectLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceWidth(float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceHeight(float AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceHeight(float& AttributeValue) const;
    
};

