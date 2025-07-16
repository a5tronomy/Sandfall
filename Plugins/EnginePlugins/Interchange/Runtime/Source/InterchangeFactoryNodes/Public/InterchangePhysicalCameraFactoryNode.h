#pragma once
#include "CoreMinimal.h"
#include "CineCameraSettings.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangePhysicalCameraFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangePhysicalCameraFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorWidth(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorHeight(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFocusMethod(const ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFocalLength(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSensorWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSensorHeight(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFocalLength(float& AttributeValue) const;
    
};

