#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeBaseLightNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeBaseLightNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeBaseLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseTemperature(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTemperature(float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLightColor(const FLinearColor& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensity(float AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseTemperature(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTemperature(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLightColor(FLinearColor& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIntensity(float& AttributeValue) const;
    
};

