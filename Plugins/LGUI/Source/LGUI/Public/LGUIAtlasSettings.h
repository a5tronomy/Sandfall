#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureDefines.h"
#include "ELGUIAtlasTextureSizeType.h"
#include "LGUIAtlasSettings.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIAtlasSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ELGUIAtlasTextureSizeType atlasTextureInitialSize;
    
    UPROPERTY(Config, EditAnywhere)
    bool atlasTextureUseSRGB;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<TextureFilter> atlasTextureFilter;
    
    UPROPERTY(Config, EditAnywhere)
    int32 spaceBetweenSprites;
    
    FLGUIAtlasSettings();
};

