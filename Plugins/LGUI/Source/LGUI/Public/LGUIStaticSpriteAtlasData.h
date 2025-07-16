#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TextureDefines.h"
#include "LGUIStaticSpriteAtlasData.generated.h"

class ULGUISpriteData;
class UTexture2D;

UCLASS(BlueprintType)
class LGUI_API ULGUIStaticSpriteAtlasData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool atlasTextureUseSRGB;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<TextureFilter> atlasTextureFilter;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTexture2D* atlasTexture;
    
    UPROPERTY(EditAnywhere)
    TArray<ULGUISpriteData*> spriteArray;
    
    UPROPERTY()
    TArray<uint8> textureMipData;
    
    UPROPERTY()
    uint32 TextureSize;
    
public:
    ULGUIStaticSpriteAtlasData();

    UFUNCTION(BlueprintCallable)
    bool ReadPixel(const FVector2D& InUV, FColor& OutPixel);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetAtlasTexture();
    
};

