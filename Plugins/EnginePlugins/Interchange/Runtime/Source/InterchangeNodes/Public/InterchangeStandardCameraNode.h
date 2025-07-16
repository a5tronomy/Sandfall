#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeBaseNode.h"
#include "EInterchangeCameraProjectionType.h"
#include "InterchangeStandardCameraNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeStandardCameraNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeStandardCameraNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomWidth(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomProjectionMode(const EInterchangeCameraProjectionType& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomNearClipPlane(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFieldOfView(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFarClipPlane(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAspectRatio(const float& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomNearClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFieldOfView(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFarClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAspectRatio(float& AttributeValue) const;
    
};

