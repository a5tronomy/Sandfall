#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangePhysicalCameraNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangePhysicalCameraNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangePhysicalCameraNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorWidth(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorHeight(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFocalLength(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomEnableDepthOfField(const bool& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSensorWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSensorHeight(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFocalLength(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomEnableDepthOfField(bool& AttributeValue) const;
    
};

