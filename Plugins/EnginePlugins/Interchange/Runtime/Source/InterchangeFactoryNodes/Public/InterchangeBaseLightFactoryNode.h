#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangeBaseLightFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeBaseLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLightColor(const FColor& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseTemperature(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTemperature(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLightColor(FColor& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIntensity(float& AttributeValue) const;
    
};

