#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "InterchangeBaseLightFactoryNode.h"
#include "InterchangeLightFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseIESBrightness(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRotation(const FRotator& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESTexture(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESBrightnessScale(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomUseIESBrightness(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomRotation(FRotator& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIntensityUnits(ELightUnits& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIESTexture(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIESBrightnessScale(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAttenuationRadius(float& AttributeValue) const;
    
};

