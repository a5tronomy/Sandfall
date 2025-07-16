#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterchangeActorFactoryNode.h"
#include "InterchangeMeshActorFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMeshActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGeometricTransform(const FTransform& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationAssetUidToPlay(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSlotMaterialDependencyUid(const FString& SlotName);
    
    UFUNCTION(BlueprintPure)
    bool GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const;
    
    UFUNCTION(BlueprintPure)
    void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomGeometricTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue) const;
    
};

