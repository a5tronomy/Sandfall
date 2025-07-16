#pragma once
#include "CoreMinimal.h"
#include "EInterchangeTextureWrapMode.h"
#include "InterchangeTextureNode.h"
#include "InterchangeTexture2DNode.generated.h"

UCLASS()
class INTERCHANGENODES_API UInterchangeTexture2DNode : public UInterchangeTextureNode {
    GENERATED_BODY()
public:
    UInterchangeTexture2DNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomWrapV(const EInterchangeTextureWrapMode& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomWrapU(const EInterchangeTextureWrapMode& AttributeValue);
    
    UFUNCTION(BlueprintPure)
    TMap<int32, FString> GetSourceBlocks() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue) const;
    
};

