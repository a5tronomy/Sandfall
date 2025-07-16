#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EInterchangeLightUnits.h"
#include "InterchangeBaseLightNode.h"
#include "InterchangeLightNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeLightNode : public UInterchangeBaseLightNode {
    GENERATED_BODY()
public:
    UInterchangeLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseIESBrightness(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRotation(const FRotator& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensityUnits(const EInterchangeLightUnits& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESTexture(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESBrightnessScale(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttenuationRadius(float AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseIESBrightness(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomRotation(FRotator& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIESTexture(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIESBrightnessScale(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAttenuationRadius(float& AttributeValue) const;
    
};

