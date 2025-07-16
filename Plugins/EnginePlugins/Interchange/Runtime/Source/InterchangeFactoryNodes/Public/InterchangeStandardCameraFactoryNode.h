#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraTypes.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangeStandardCameraFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeStandardCameraFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomWidth(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomProjectionMode(const TEnumAsByte<ECameraProjectionMode::Type>& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomNearClipPlane(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFieldOfView(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFarClipPlane(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAspectRatio(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode::Type>& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomNearClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFieldOfView(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFarClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAspectRatio(float& AttributeValue) const;
    
};

