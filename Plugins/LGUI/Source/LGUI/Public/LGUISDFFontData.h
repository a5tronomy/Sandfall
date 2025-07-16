#pragma once
#include "CoreMinimal.h"
#include "LGUIFreeTypeRenderFontData.h"
#include "LGUISDFFontData.generated.h"

class UMaterialInterface;

UCLASS()
class LGUI_API ULGUISDFFontData : public ULGUIFreeTypeRenderFontData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* SDFDefaultMaterials[3];
    
    UPROPERTY(EditAnywhere)
    int32 FontSize;
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 SDFRadius;
    
    UPROPERTY(EditAnywhere)
    float italicAngle;
    
    UPROPERTY(EditAnywhere)
    float boldRatio;
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 LineHeight;
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 VerticalOffset;
    
public:
    ULGUISDFFontData();

};

