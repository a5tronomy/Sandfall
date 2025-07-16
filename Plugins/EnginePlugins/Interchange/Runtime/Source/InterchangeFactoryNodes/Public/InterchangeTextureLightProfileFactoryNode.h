#pragma once
#include "CoreMinimal.h"
#include "InterchangeTexture2DFactoryNode.h"
#include "InterchangeTextureLightProfileFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeTextureLightProfileFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTextureMultiplier(const float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBrightness(const float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTextureMultiplier(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomBrightness(float& AttributeValue) const;
    
};

