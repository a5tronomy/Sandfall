#pragma once
#include "CoreMinimal.h"
#include "InterchangeLightFactoryNode.h"
#include "InterchangeRectLightFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeRectLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceHeight(float& AttributeValue) const;
    
};

