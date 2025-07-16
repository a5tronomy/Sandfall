#pragma once
#include "CoreMinimal.h"
#include "UIRenderableCustomRaycast.h"
#include "UIRenderableCustomRaycast_VisiblePixel.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIRenderableCustomRaycast_VisiblePixel : public UUIRenderableCustomRaycast {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float VisibilityThreshold;
    
    UPROPERTY(EditAnywhere)
    uint8 PixelChannel;
    
public:
    UUIRenderableCustomRaycast_VisiblePixel();

    UFUNCTION(BlueprintCallable)
    void SetVisibilityThreshold(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPixelChannel(uint8 Value);
    
    UFUNCTION(BlueprintPure)
    float GetVisibilityThreshold() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetPixelChannel() const;
    
};

