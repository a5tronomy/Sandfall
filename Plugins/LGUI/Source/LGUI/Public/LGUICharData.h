#pragma once
#include "CoreMinimal.h"
#include "LGUICharData.generated.h"

USTRUCT()
struct FLGUICharData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint16 Width;
    
    UPROPERTY(VisibleAnywhere)
    uint16 Height;
    
    UPROPERTY(VisibleAnywhere)
    int16 xoffset;
    
    UPROPERTY(VisibleAnywhere)
    int16 yoffset;
    
    UPROPERTY(VisibleAnywhere)
    int16 xadvance;
    
    UPROPERTY(VisibleAnywhere)
    float uv0X;
    
    UPROPERTY(VisibleAnywhere)
    float uv0Y;
    
    UPROPERTY(VisibleAnywhere)
    float uv3X;
    
    UPROPERTY(VisibleAnywhere)
    float uv3Y;
    
    LGUI_API FLGUICharData();
};

