#pragma once
#include "CoreMinimal.h"
#include "InterchangeLightFactoryNode.h"
#include "InterchangePointLightFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangePointLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLightFalloffExponent(float& AttributeValue) const;
    
};

