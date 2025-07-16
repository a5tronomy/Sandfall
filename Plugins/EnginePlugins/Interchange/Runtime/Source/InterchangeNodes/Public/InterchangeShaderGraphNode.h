#pragma once
#include "CoreMinimal.h"
#include "InterchangeShaderNode.h"
#include "InterchangeShaderGraphNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeShaderGraphNode : public UInterchangeShaderNode {
    GENERATED_BODY()
public:
    UInterchangeShaderGraphNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTwoSidedTransmission(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTwoSided(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomScreenSpaceReflections(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomOpacityMaskClipValue(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIsAShaderFunction(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBlendMode(int32 AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTwoSidedTransmission(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTwoSided(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomScreenSpaceReflections(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomOpacityMaskClipValue(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomIsAShaderFunction(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBlendMode(int32& AttributeValue) const;
    
};

