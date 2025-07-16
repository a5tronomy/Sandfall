#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeBaseNode.h"
#include "EInterchangeTextureFilterMode.h"
#include "InterchangeTextureNode.generated.h"

UCLASS(Abstract)
class INTERCHANGENODES_API UInterchangeTextureNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeTextureNode();

    UFUNCTION(BlueprintCallable)
    void SetPayLoadKey(const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSRGB(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFilter(const EInterchangeTextureFilterMode& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustombFlipGreenChannel(const bool& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSRGB(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustombFlipGreenChannel(bool& AttributeValue) const;
    
};

