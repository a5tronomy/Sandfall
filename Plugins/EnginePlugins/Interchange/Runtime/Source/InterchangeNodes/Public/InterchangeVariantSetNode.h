#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeBaseNode.h"
#include "InterchangeVariantSetNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeVariantSetNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeVariantSetNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomVariantsPayloadKey(const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDisplayText(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomVariantsPayloadKey(FString& PayloadKey) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDisplayText(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomDependencyUids(TArray<FString>& OutDependencyUids) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCustomDependencyUidCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomDependencyUid(const int32 Index, FString& OutDependencyUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomDependencyUid(const FString& DependencyUid);
    
};

