#pragma once
#include "CoreMinimal.h"
#include "ELGUIAtlasTextureSizeType.h"
#include "ELGUIDynamicFontDataType.h"
#include "ELGUIDynamicFontLineHeightType.h"
#include "LGUIFontData_BaseObject.h"
#include "LGUIFreeTypeRenderFontData.generated.h"

class UFontFace;
class ULGUIFreeTypeRenderFontData;
class UTexture2D;
class UUIText;

UCLASS(Abstract)
class LGUI_API ULGUIFreeTypeRenderFontData : public ULGUIFontData_BaseObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ELGUIDynamicFontDataType fontType;
    
    UPROPERTY(EditAnywhere)
    FString fontFilePath;
    
    UPROPERTY(EditAnywhere)
    bool useRelativeFilePath;
    
    UPROPERTY(EditAnywhere)
    bool useExternalFileOrEmbedInToUAsset;
    
    UPROPERTY(EditAnywhere)
    UFontFace* unrealFont;
    
    UPROPERTY(EditAnywhere)
    int32 FontFace;
    
    UPROPERTY(EditAnywhere)
    ELGUIDynamicFontLineHeightType lineHeightType;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    bool hasKerning;
    
    UPROPERTY(EditAnywhere)
    ELGUIAtlasTextureSizeType initialSize;
    
    UPROPERTY(EditAnywhere)
    int32 rectPackCellSize;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTexture2D* Texture;
    
    UPROPERTY(EditAnywhere)
    TArray<ULGUIFreeTypeRenderFontData*> fallbackFontArray;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    TArray<TWeakObjectPtr<UUIText>> renderTextArray;
    
    UPROPERTY()
    TArray<uint8> fontBinaryArray;
    
public:
    ULGUIFreeTypeRenderFontData();

};

