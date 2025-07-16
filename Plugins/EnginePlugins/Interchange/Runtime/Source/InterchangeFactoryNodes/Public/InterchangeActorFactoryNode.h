#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeActorFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomMobility(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLocalTransform(const FTransform& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGlobalTransform(const FTransform& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomActorClassName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMobility(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLocalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomGlobalTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomActorClassName(FString& AttributeValue) const;
    
};

