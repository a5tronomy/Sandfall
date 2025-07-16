#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeMaterialInstanceNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeMaterialInstanceNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialInstanceNode();

    UFUNCTION(BlueprintPure)
    bool SetCustomParent(const FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetVectorParameterValue(const FString& ParameterName, FLinearColor& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetTextureParameterValue(const FString& ParameterName, FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetStaticSwitchParameterValue(const FString& ParameterName, bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetScalarParameterValue(const FString& ParameterName, float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomParent(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddVectorParameterValue(const FString& ParameterName, const FLinearColor& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddTextureParameterValue(const FString& ParameterName, const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddStaticSwitchParameterValue(const FString& ParameterName, bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool AddScalarParameterValue(const FString& ParameterName, float AttributeValue);
    
};

