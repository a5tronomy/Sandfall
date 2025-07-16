#pragma once
#include "CoreMinimal.h"
#include "InterchangePointLightNode.h"
#include "InterchangeSpotLightNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeSpotLightNode : public UInterchangePointLightNode {
    GENERATED_BODY()
public:
    UInterchangeSpotLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomOuterConeAngle(float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomInnerConeAngle(float AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomOuterConeAngle(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomInnerConeAngle(float& AttributeValue) const;
    
};

