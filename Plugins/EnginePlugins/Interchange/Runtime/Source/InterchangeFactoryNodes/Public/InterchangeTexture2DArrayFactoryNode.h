#pragma once
#include "CoreMinimal.h"
#include "InterchangeTextureFactoryNode.h"
#include "InterchangeTexture2DArrayFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeTexture2DArrayFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomAddressZ(const uint8 AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAddressZ(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAddressY(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAddressX(uint8& AttributeValue) const;
    
};

