#pragma once
#include "CoreMinimal.h"
#include "LGUIFreeTypeRenderFontData.h"
#include "LGUIFontData.generated.h"

UCLASS()
class LGUI_API ULGUIFontData : public ULGUIFreeTypeRenderFontData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float italicAngle;
    
    UPROPERTY(EditAnywhere)
    float boldRatio;
    
public:
    ULGUIFontData();

};

