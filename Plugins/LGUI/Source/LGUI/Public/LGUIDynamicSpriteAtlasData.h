#pragma once
#include "CoreMinimal.h"
#include "LGUIDynamicSpriteAtlasData.generated.h"

class ULGUISpriteData;
class UObject;
class UTexture2D;

USTRUCT(BlueprintType)
struct LGUI_API FLGUIDynamicSpriteAtlasData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    UTexture2D* atlasTexture;
    
    UPROPERTY(VisibleAnywhere)
    TArray<ULGUISpriteData*> spriteDataArray;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TArray<TWeakObjectPtr<UObject>> renderSpriteArray;
    
    FLGUIDynamicSpriteAtlasData();
};

