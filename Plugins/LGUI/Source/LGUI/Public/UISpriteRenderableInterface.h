#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UISpriteRenderableInterface.generated.h"

class ULGUISpriteData_BaseObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UUISpriteRenderableInterface : public UInterface {
    GENERATED_BODY()
};

class IUISpriteRenderableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    ULGUISpriteData_BaseObject* SpriteRenderableGetSprite() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void ApplyAtlasTextureScaleUp();
    
    UFUNCTION(BlueprintNativeEvent)
    void ApplyAtlasTextureChange();
    
};

