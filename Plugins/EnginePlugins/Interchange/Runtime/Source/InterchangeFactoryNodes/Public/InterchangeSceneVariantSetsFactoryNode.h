#pragma once
#include "CoreMinimal.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeSceneVariantSetsFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSceneVariantSetsFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool RemoveCustomVariantSetUid(const FString& VariantUid);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomVariantSetUids(TArray<FString>& OutVariantUids) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCustomVariantSetUidCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetCustomVariantSetUid(const int32 Index, FString& OutVariantUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomVariantSetUid(const FString& VariantUid);
    
};

