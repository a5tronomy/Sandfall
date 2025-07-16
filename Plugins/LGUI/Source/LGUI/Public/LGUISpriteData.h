#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUISpriteData_BaseObject.h"
#include "LGUISpriteInfo.h"
#include "LGUISpriteData.generated.h"

class ULGUISpriteData;
class ULGUIStaticSpriteAtlasData;
class UObject;
class UTexture2D;

UCLASS()
class LGUI_API ULGUISpriteData : public ULGUISpriteData_BaseObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UTexture2D* SpriteTexture;
    
    UPROPERTY(EditAnywhere)
    FLGUISpriteInfo SpriteInfo;
    
    UPROPERTY(EditAnywhere)
    ULGUIStaticSpriteAtlasData* packingAtlas;
    
    UPROPERTY(EditAnywhere)
    FName packingTag;
    
    UPROPERTY(EditAnywhere)
    bool useEdgePixelPadding;
    
    UPROPERTY(Transient)
    UTexture2D* atlasTexture;
    
public:
    ULGUISpriteData();

    UFUNCTION(BlueprintPure)
    bool HavePackingTag() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetSpriteTexture() const;
    
    UFUNCTION(BlueprintPure)
    FName GetPackingTag() const;
    
    UFUNCTION(BlueprintCallable)
    static ULGUISpriteData* CreateLGUISpriteData(UObject* Outer, UTexture2D* inSpriteTexture, FVector2D inHorizontalBorder, FVector2D inVerticalBorder, FName inPackingTag);
    
};

