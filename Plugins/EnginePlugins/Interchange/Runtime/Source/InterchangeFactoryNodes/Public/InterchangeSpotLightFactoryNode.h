#pragma once
#include "CoreMinimal.h"
#include "InterchangePointLightFactoryNode.h"
#include "InterchangeSpotLightFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeSpotLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomOuterConeAngle(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomInnerConeAngle(float& AttributeValue) const;
    
};

