#pragma once
#include "CoreMinimal.h"
#include "LGUISpriteInfo.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUISpriteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint16 Width;
    
    UPROPERTY(VisibleAnywhere)
    uint16 Height;
    
    UPROPERTY(EditAnywhere)
    uint16 borderLeft;
    
    UPROPERTY(EditAnywhere)
    uint16 borderRight;
    
    UPROPERTY(EditAnywhere)
    uint16 borderTop;
    
    UPROPERTY(EditAnywhere)
    uint16 borderBottom;
    
    UPROPERTY(EditAnywhere)
    int16 paddingLeft;
    
    UPROPERTY(EditAnywhere)
    int16 paddingRight;
    
    UPROPERTY(EditAnywhere)
    int16 paddingTop;
    
    UPROPERTY(EditAnywhere)
    int16 paddingBottom;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float uv0X;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float uv0Y;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float uv3X;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float uv3Y;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float buv0X;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float buv0Y;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float buv3X;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    float buv3Y;
    
    FLGUISpriteInfo();
};

